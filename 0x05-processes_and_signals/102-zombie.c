nclude <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

/**
* infinite_while - Run an infinite while loop.
* Made by NOGUIAA
* Return: Always ZERO
*/

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}

/**
* main - Creates five zombie processes.
* Made by MEGATRON
* Return: Always WERO
*/

int main(void)
{
	pid_t pid;
	char cnt = 0;

	while (cnt < 5)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			cnt++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
