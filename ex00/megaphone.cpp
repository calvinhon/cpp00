#include <iostream>
#include <cctype>
#include <cstring>

void trim_and_toupper(const std::string& str) {
    std::string trimmed_str;
    int 		start = 0;
    int 		end;
    int 		i = -1;

    while (str[start] && strchr(" \t\n\r\f\v", str[start]))
        start++;
    if (!str[start])
		return ;
	end = start;
    while (str[end])
        end++;
    end--;
	while (strchr(" \t\n\r\f\v", str[end]))
        end--;
    trimmed_str = str.substr(start, end - start + 1);
    while (trimmed_str[++i])
        std::cout << (char)std::toupper(trimmed_str[i]);
}

int main(int ac, char **av) {
    int i = 0;
    int j = -1;

    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (av[++i]) {
            if (strlen(av[i])) {
				trim_and_toupper(av[i]);
				std::cout << " ";
			}
        }
        std::cout << std::endl;
    }
    return (0);
}