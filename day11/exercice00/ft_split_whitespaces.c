#include <stdlib.h>

int		is_word(char c, char cbefore) //true if current is alphanumeric and preceding is whitespace
{
	return (((c >= '0' && c <= '9') || 
				(c >= 'A' && c <= 'Z') ||
				(c >= 'a' && c <= 'z')) // first testing if curent char is alpha-numeric
			&& (cbefore == ' ' || cbefore == '\n' || cbefore == '\t')); // then testing of previous char is whitespaces. If both are true, then is_word return true.
}

int		get_words_count(char *str)
{
	int	words_count;
	int	i;

	i = 0;
	words_count = 0;
	while (str[i] != '\0') //going through the pointer *str
	{
		if (is_word(str[i], str[i - 1]) || (str[i] != ' ' && str[i] != '\n' && //if str[i] is not whitespace and i!=0 or is_word of actual char and previous char is true.
					str[i] != '\t' && i == 0)) //if her, it means either that str[i] is alphanumeric and str[i-1] is whitespaces OR str[i] is whitesspaces
						words_count++; // and i = 0, meaning str[i] was the first letter.
			i++;

	}
	return (words_count);
}

int		if_new_string(int i, char *str) //getting the current char of str with "i"
{
	return (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\n' && //checking if preceding char is NOT whitspace and that i is not first char of str to return true
			str[i - 1] != '\t');
}

int		*get_words_size(char *str)
{
	int	index;
	int	i;
	int	words_count;
	int	*words_size;

	i = 0;
	words_count = get_words_count(str); //getting the number of words
	words_size = malloc(words_count * sizeof(int)); //allocating enough memory to have all the words sizes
	while (i <= words_count) //going through each words
	{
		words_size[i] = 0; //intinializing every position in the array with 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i] != '\0') //going through the string.
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') //while str[i] is not white space, 
			words_size[index]++; // updating the size number in the array for current word
		else if (if_new_string(i, str)) // if it is whitespace, checking if_new_string. If true, moving one spot in the index to a new word. current is white,
			index++;			//presceding was not, so it's a new word
		i++;
	}
	return (words_size); // returning an array of int with the size of each words in the order of appearence
}

char	**ft_split_whitespaces(char *str)
{
	char	**words; 
	int		i;
	int		j;
	int		index;
	int		*words_size;

	words = malloc((get_words_count(str) + 1) * sizeof(char*)); //calls to get number of words in str, adding 1 for the 0th element at the end then using sizeof to give space.
	words_size = get_words_size(str); //getting a *word_size of int. to a *int (array of int)
	index = 0;
	j = 0;
	i = -1;
	while (str[++i] != '\0') //going through str until the end
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') //if not a whitespace
		{
			if (i == 0 || is_word(str[i], str[i - 1])) //if first char or it current is alphanum AND preceding is whitespace
				words[index] = malloc(words_size[index] * sizeof(char)); //allocating memory of the size of the word in char with the array of int;
			words[index][j] = str[i]; // then, copying the char in the index of word and in the j place of the char array. It's an array of char array
			words[index][++j] = '\0'; //then putting stoping char in the place after right now (will be replaced by chars if any before word ends) 
						//and incrementing at the same time
		}
		else if (if_new_string(i, str) && ++index) //if a whitspace and char before was not, then new string so 
			j = 0; // putting j back to 0 to re-copy another string at another index (incrementing index right before using, to checking of it exists
	}
	words[get_words_count(str)] = 0; //putting the 0th char to the end of the array
	return (words);
}
