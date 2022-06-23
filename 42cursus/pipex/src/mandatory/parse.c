#include "pipex.h"
#include <stdlib.h>
#include <stdio.h>

static int	is_char_literal(char c, int *flag_c)
{
	if (c == '\'')
	{
		*flag_c ^= 1;
		return (1);
	}
	return (0);
}

static int	is_string_literal(char c, int *flag_s)
{
	if (c == '"')
	{
		*flag_s ^= 1;
		return (1);
	}
	return (0);
}

static size_t	delimiter_locate(char *s)
{
	int		flag_c;
	int		flag_s;
	char	*tmp;

	flag_c = 0;
	flag_s = 0;
	tmp = s;
	while(*s)
	{
		if (is_char_literal(*s, &flag_c) || is_string_literal(*s, &flag_s))
			s++;
		else if (*s == ' ' && !flag_c && !flag_s)
			return (s - tmp);
		else
			s++;
	}
	return (0);
}

static int	elem_count(char *s)
{
	int	cnt;
	size_t	locate;

	cnt = 0;
	locate = 0;
	while (*s)
	{
		locate = delimiter_locate(s);
		if (!locate)
			return (cnt);
		s += locate + 1;
	}
	return (cnt);
}

void	duplicate_trimed_cmds(char *cmds, int locate, size_t i, t_pipex *px)
{
	char	*trim;

	if (!*cmds)
		return ;
	trim = ft_strtrim(cmds, "\"'");
	if (!trim)
		return ;
	if (!locate)
	{
		px->cmd_op[i] = ft_strdup(cmds);
		if (!px->cmd_op[i])
			return ;
		return ;
	}
	px->cmd_op[i] = ft_substr(cmds, 0, locate);
	if (!px->cmd_op[i])
		return ;
}

void	split_cmds(char *cmds, t_pipex *px)
{
	int cnt;
	int locate;
	size_t	i;

	cnt = elem_count(cmds);
	px->cmd_op = malloc(sizeof(char *) * cnt + 1);
	px->cmd_op[cnt] = NULL;
	if (!px->cmd_op)
		return ;
	i = 0;
	while (i < cnt)
	{
		locate = delimiter_locate(cmds);
		if (!locate)
			return (duplicate_trimed_cmds(cmds, locate, i, px));
		duplicate_trimed_cmds(cmds, locate, i, px);
		cmds += locate + 1;
	}
}
	//i = 0;
	//while (i < parse_elem(av, px))
	//	px->cmd_op[i++] = malloc(20);
	//i = 0;
	//j = 0;
	//*flag_c = 0;
	//*flag_s = 0;
	//while (*(av + j))
	//{
	//	if (is_char_literal(*(av + j), flag_c) || is_string_literal(*(av + j), flag_s))
	//		av++;
	//	if (*(av + j) == ' ' && !*flag_c && !*flag_s)
	//	{
	//		i++;
	//		av += j + 1;
	//		j = 0;
	//	}
	//	else
	//	{
	//		px->cmd_op[i][j] = *(av + j);
	//		j++;
	//	}
	//}
	//px->cmd_op[i + 1] = NULL;
	//i = -1;
	//while (px->cmd_op[++i])
	//	ft_dprintf(2, "px->cmd_op[%d] = %s\n", i, px->cmd_op[i]);

//int main(void)
//{
//	int cnt = 1;
//	size_t len = 0;
//	size_t locate = 0;
//	char *tmp;
//	char *s = strdup("echo echo echo \"hello world\"");
//	char s2[] = "echo 'hello world'";
//	char *s3 = strdup("awk '{print $1}'");
//	char s4[] = "echo 'hello \"hello world\" world'";
//	char s5[] = "\"'\"";
//	char s6[] = "'\"'";
//
//	while (*s3)
//	{
//		locate = delimiter_locate(s3);
//		if (!locate)
//		{
//			if (*s3)
//				printf("locate: [%s]\n", ft_strtrim(s3, "\"'"));
//			return (0);
//		}
//		printf("locate: [%s]\n", ft_strtrim(ft_substr(s3, 0, locate), "\"'"));
//		s3 += locate + 1;
//	}
//
//	//printf("[%s]: cnt = %d, len = %zu\n", s, cnt, len);
//	//parse_elem(s2, &cnt, &len);
//	//printf("[%s]: cnt = %d, len = %zu\n", s2, cnt, len);
//	//parse_elem(s3, &cnt, &len);
//	//printf("[%s]: cnt = %d, len = %zu\n", s3, cnt, len);
//	//parse_elem(s4, &cnt, &len);
//	//printf("[%s]: cnt = %d, len = %zu\n", s4, cnt, len);
//	//parse_elem(s5, &cnt, &len);
//	//printf("[%s]: cnt = %d, len = %zu\n", s5, cnt, len);
//	//parse_elem(s6, &cnt, &len);
//	//printf("[%s]: cnt = %d, len = %zu\n", s6, cnt, len);
//	//array = parse(s);
//	//printf("s = [%s]\n", s);
//	//while (array[i])
//	//	printf("array = [%s]\n", array[i++]);
//	//array = parse(s2);
//	//i = 0;
//	//printf("s2 = [%s]\n", s2);
//	//while (array[i])
//	//	printf("array = [%s]\n", array[i++]);
//	//array = parse(s3);
//	//i = 0;
//	//printf("s3 = [%s]\n", s3);
//	//while (array[i])
//	//	printf("array = [%s]\n", array[i++]);
//	//array = parse(s4);
//	//i = 0;
//	//printf("s4 = [%s]\n", s4);
//	//while (array[i])
//	//	printf("array = [%s]\n", array[i++]);
//}
