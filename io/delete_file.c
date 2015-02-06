#include <stdio.h>

int main()
{
	int status;
	char file_name[25];
	
	printf("Enter the name of file you wish to delete\n");
	fgets(file_name, sizeof(file_name), stdin);

	printf("filename is %s\n", file_name);
	status = remove(file_name);

	if (status == 0) 
	{
		printf("%s file deleted successfully\n", file_name);
	} else {
		printf("Unable to delete the file\n");
		perror("Error");
	}

	return 0;
}
