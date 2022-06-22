#include "pipex.h"
#include <stdlib.h>

void	parse_cmd(char *av ,t_pipex *px)
{
	int i = 0;
	int j = 0;
	int sq = 0;
	int dq = 0;

	px->cmd_op = malloc(sizeof(char *) * 10);
	while (i < 10)
		px->cmd_op[i++] = malloc(20);
	i = 0;
	while (*(av + j))
	{
		if (*(av + j) == '\'')
		{
			if (!sq)
				sq = 1;
			else
				sq = 0;
			av++;
		}
		else if (*(av + j) == '"')
		{
			if (!dq)
				dq = 1;
			else
				dq = 0;
			av++;
		}
		else if (*(av + j) == ' ' && !dq && !sq)
		{
			i++;
			av += j + 1;
			j = 0;
		}
		else
		{
			px->cmd_op[i][j] = *(av + j);
			j++;
		}
	}
	px->cmd_op[i + 1] = NULL;
	i = -1;
	while (px->cmd_op[++i])
		ft_dprintf(2, "px->cmd_op[%d] = %s\n", i, px->cmd_op[i]);
}

//int main(void)
//{
//	int i = 0;
//	char **array;
//	char s[] = "echo \"hello world\"";
//	char s2[] = "echo 'hello world'";
//	char s3[] = "\"'\"";
//	char s4[] = "'\"'";
//
//	array = parse(s);
//	printf("s = [%s]\n", s);
//	while (array[i])
//		printf("array = [%s]\n", array[i++]);
//	array = parse(s2);
//	i = 0;
//	printf("s2 = [%s]\n", s2);
//	while (array[i])
//		printf("array = [%s]\n", array[i++]);
//	array = parse(s3);
//	i = 0;
//	printf("s3 = [%s]\n", s3);
//	while (array[i])
//		printf("array = [%s]\n", array[i++]);
//	array = parse(s4);
//	i = 0;
//	printf("s4 = [%s]\n", s4);
//	while (array[i])
//		printf("array = [%s]\n", array[i++]);
//}
