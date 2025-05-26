
char sentence[256] = "De Kok gebruikte een lepel om zijn pap te scheppen, niet raar.\n";

int find_next_whitespace(char *s, int index)
{
	for(int i = index; i < strlen(s); i++) {
		if(s[i] == ' ') {
			return i;
		}
	}
	return 0;
}

int is_palindrome(char *s)
{
	

int main(int argc, char *argc[])
{
	for(int i=0; i<
