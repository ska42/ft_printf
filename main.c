#include "printf.h"
# include <stdio.h>



int main() {
    int i;
    i = 0;

	char string[] = "string";

	void *ptr_1;
	char *ptr_2;
	int  *ptr_3;
	void *ptr_null;
	char c = 'a';
	int t = 50;

	ptr_1 = string;


	// ft_printf("|%0.010%s%s%->%c<- |%0-0.05d|\n", '\0', "salut", -42);
	//    printf("|%0.010%s%s%->%c<- |%0-0.05d|\n", '\0', "salut", -42);

	ptr_null = NULL;
	printf("\033[1;31m");
	printf("=============================================================================\n");
    printf("=============================================================================\n");
	printf("=============================================================== mabois ======\n");
	printf("******************** PART 1 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|TEST|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|TEST|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("||\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("||\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|fin des TESTs qui servenr a rien\200 < negatif|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|fin des TESTs qui servenr a rien\200 < negatif|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\n\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("123");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("123");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\n\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 2 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %d , %d , %d , %d *** %u , %u, %u , %u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %d , %d , %d , %d *** %u , %u, %u , %u|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", 123, -500000000, 5000000000, -2147483648, 123, -500000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", -9999999999, -4294967296, 4294967295, -2147483648, -9999999999, -4294967296, 4294967295, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %x , %x , %x , %x *** %X , %X, %X , %X|\n", -9999999999, -4294967296, 4294967295, -2147483648, -9999999999, -4294967296, 4294967295, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|ok %i , %i , %i , %i\n", 123, -500000000000, 5000000000, -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %i , %i , %i , %i\n", 123, -500000000000, 5000000000, -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 3 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %p , %p , %p , %p|\n", ptr_1, ptr_2, ptr_3, ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %p , %p , %p , %p|\n", ptr_1, ptr_2, ptr_3, ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 4 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10.10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10.10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%%%%%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%%%%%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 5 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...50%|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...50%|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 6 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...50k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...50k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 7 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10.10d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5d|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5d|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 8 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-*.***d|\n",-50, -60, -80, -90, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***d|\n",-50, -60, -80, -90, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*..-.10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10*0d|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10*0d|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%.2d|\n",54321);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.2d|\n",54321);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%.d|\n",54321);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.d|\n",54321);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 9 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10p|\n", ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10p|\n", ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-0*..-.5p|\n", -30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-0*..-.5p|\n", -30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5p|\n", ptr_3);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5p|\n", ptr_3);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 10 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-*.***p|\n",-50, -60, -80, -90, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***p|\n",-50, -60, -80, -90, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*p|\n",20, 30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*p|\n",20, 30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.p|\n",20, 30, ptr_3);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.p|\n",20, 30, ptr_3);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*..-.10*0p|\n",20, -30, ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*0p|\n",20, -30, ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0p|\n",20, 30, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0p|\n",20, 30, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10**0p|\n",20, 30, ptr_2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10**0p|\n",20, 30, ptr_2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 11 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5xdc|\n", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5xdc|\n", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 12 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-*.***xdc|\n",-50, -60, -80, -20, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*.***xdc|\n",-50, -60, -80, -20, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-*..-.10*xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-*..-.10*.xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*..-.10*.xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%-*...10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-*...10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%0.-*..-.10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%0.-*..-.10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%10*0xdc|\n",20, 30, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10*0xdc|\n",20, 30, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 13 (TRIKY > precision 0 padding 0 value 0) :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1    %%d = 0\n");
		i = printf("|ok %.0d|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0d|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2    %%i = 0\n");
		i = printf("|ok %.0i|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0i|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3    %%u = 0\n");
		i = printf("|ok %.0u|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.0u|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4    %%x = 0\n");
		i = printf("|ok %.x|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.x|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5    %%X = 0\n");
		i = printf("|ok %.X|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.X|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6    %%p = null\n");
		i = printf("|ok %.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7    %%p = null  padding 3\n");
		i = printf("|ok %3.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %3.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8    %%p = null  padding 5\n");
		i = printf("|ok %05.p|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %05.p|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9    %%c = 0\n");
		i = printf("|ok %c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10    %%c = 9\n");
		i = printf("|ok %.c|\n", 9);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.c|\n", 9);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11    %%c = '@'\n");
		i = printf("|ok %.c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12    %%s = 'string'\n");
		i = printf("|ok %.s|\n", string);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.s|\n", string);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 13    %%s = (null)\n");
		i = printf("|ok %.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 14    k = other\n");
		i = printf("|ok %.k|\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %.k|\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 14 (neg padding == pos padding + minus option) :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|ok %*.*d|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*d|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|ok %*.*i|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*i|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|ok %*.*u|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*u|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|ok %*.*x|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*x|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|ok %*.*X|\n", -20, -10, 33);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*X|\n", -20, -10, 33);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|ok %*.*p|\n", -20, -10, ptr_1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*p|\n", -20, -10, ptr_1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|ok %*.*c|\n", -20, -10, '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*c|\n", -20, -10, '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|ok %*.*s|\n", -20, -10, "riddim dubstep");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|ok %*.*s|\n", -20, -10, "riddim dubstep");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 15 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%-10.10c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-10.10c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%-5..-.10c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-5..-.10c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%-020..-.5c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%-020..-.5c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%020...5c|\n", '@');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5c|\n", '@');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%c|\n", 16);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%c|\n", 16);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%02...5c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%02...5c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%020...5c|\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%020...5c|\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%05...2c|\n", 16);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", 16);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%05...2c|\n", '*');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", '*');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%05...2c|\n", '*');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%05...2c|\n", '*');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 16 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%.10s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.10s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%.1s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.1s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%.s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%.30s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.30s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%.3s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.3s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%.4s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.4s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%.5s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.5s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%.6s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.6s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%.1s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.1s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%.5s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.5s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%.10s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.10s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 17 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%20.10s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.10s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%20.1s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%20.s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%20.30s|\n", "uneLongueChaineDeChar");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.30s|\n", "uneLongueChaineDeChar");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("|%20.3s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.3s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("|%20.4s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.4s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("|%20.5s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("|%20.6s|\n", "12345");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.6s|\n", "12345");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("|%s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("|%20.s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("|%20.1s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.1s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%20.5s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%20.5s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("|%15.10s|\n", ptr_null);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%15.10s|\n", ptr_null);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 18 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%10.50.**--*dcsdp%%%@@@%**Xpcd%%d|\n", -25, -15, -5, -33, 4, 6, -4897987565423, 123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|sblpoup%000.*000-d%%%20.1s %0.-10d|\n", 20, -9879879898, "uneLongueChaineDeChar", -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|sblpoup%000.*000-d%%%20.1s %0.-10d|\n", 20, -9879879898, "uneLongueChaineDeChar", -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%*.*p%%|\n", -20, 15, -12345);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*.*p%%|\n", -20, 15, -12345);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 19 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%@@@%", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("%@@@%10", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%10", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%@@@%.10", "test"); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%@@@%.10", "test"); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 1\n");
		i = printf("@moulitest: %5.x %5.0x", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.x %5.0x", 0, 0); printf("|fin");
		printf("                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 2\n");
		i = printf("@moulitest: %5.7x %05.13x", 0, 0); printf("|fin");
			fflush(stdout);
		printf("               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.7x %05.13x", 0, 0); printf("|fin");
		printf("               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 3\n");
		i = printf("@moulitest: %.7p %5.0p", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0p", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 4\n");
		i = printf("@moulitest: %.7p %5.0X", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0X", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 5\n");
		i = printf("@moulitest: %.7p %5.0u", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                     \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7p %5.0u", 0, 0); printf("|fin");
		printf("                     \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6 - 1\n");
		i = printf("@moulitest: %.7c %5.012c", 0, '@'); printf("|fin");
			fflush(stdout);
		printf("                              \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7c %5.012c", 0, '@'); printf("|fin");
		printf("                              \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6 - 2\n");
		i = printf("@moulitest: %.7c %5.0c", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7c %5.0c", 0, 0); printf("|fin");
		printf("                               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 7\n");
		i = printf("@moulitest: %.7s %5.0s", ptr_null, ptr_null); printf("|fin");
			fflush(stdout);
		printf("                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %.7s %5.0s", ptr_null, ptr_null); printf("|fin");
		printf("                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                                \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                                \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("@moulitest: %c", 0); printf("|fin");
			fflush(stdout);
		printf("                                    \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %c", 0); printf("|fin");
		printf("                                    \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%2c", 0); printf("|fin");
			fflush(stdout);
		printf("                                               \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%2c", 0); printf("|fin");
		printf("                                               \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("null %c and text", 0); printf("|fin");
			fflush(stdout);
		printf("                                  \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("null %c and text", 0); printf("|fin");
		printf("                                  \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("@moulitest: %5.d %5.0d", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %5.d %5.0d", 0, 0); printf("|fin");
		printf("                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 20 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("@moulitest: %c", 0); printf("|fin");
			fflush(stdout);
		printf("                                 \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("@moulitest: %c", 0); printf("|fin");
		printf("                                 \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%2c", 0); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%2c", 0); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 1\n");
		i = printf("%05d", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05d", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 2\n");
		i = printf("%05i", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05i", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 3\n");
		i = printf("%05u", -42); printf("|fin");
			fflush(stdout);
		printf("                                       \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05u", -42); printf("|fin");
		printf("                                       \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 4\n");
		i = printf("%05x", -42); printf("|fin");
			fflush(stdout);
		printf("                                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05x", -42); printf("|fin");
		printf("                                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 5\n");
		i = printf("%05X", -42); printf("|fin");
			fflush(stdout);
		printf("                                         \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05X", -42); printf("|fin");
		printf("                                         \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2 - 6\n");
		i = printf("%05c", -42); printf("|fin");
			fflush(stdout);
		printf("                                            \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05c", -42); printf("|fin");
		printf("                                            \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 20 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1 - 1\n");
		i = printf("%5d", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5d", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 2\n");
		i = printf("%5i", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5i", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 3\n");
		i = printf("%5u", -42); printf("|fin");
			fflush(stdout);
		printf("                                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5u", -42); printf("|fin");
		printf("                                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 4\n");
		i = printf("%5x", -42); printf("|fin");
			fflush(stdout);
		printf("                                          \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5x", -42); printf("|fin");
		printf("                                          \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 5\n");
		i = printf("%05X", -42); printf("|fin");
			fflush(stdout);
		printf("                                          \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05X", -42); printf("|fin");
		printf("                                          \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 6\n");
		i = printf("%05p", -42); printf("|fin");
			fflush(stdout);
		printf("                                        \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05p", -42); printf("|fin");
		printf("                                        \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 1 - 7\n");
		i = printf("%05c", -42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05c", -42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 21 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("{%3c}", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%3c}", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c'); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s%d%p%%%i%u%x%X%c","bonjour", 42, &c, 42, 42, 42, 42, 'c'); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("{%*c}", 0, 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%*c}", 0, 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4 - 1\n");
		i = printf("{%05.*d}", -15, 42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%05.*d}", -15, 42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4 - 2\n");
		i = printf("{%05.*u}", -10, 42); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%05.*u}", -10, 42); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 22    test pousse sur %%c :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("%5.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%5.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("%05.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%05.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("%.2c", '\0'); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.2c", '\0'); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);


	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 23    test a tester avec cat -e pour les ^@ :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");

		i = printf("%.2c", NULL); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%.2c", NULL); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");

		i = printf("@moulitest: %c", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("@moulitest: %c", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");

		i = printf("%-4.8c", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%-4.8c", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");

		i = printf("null %c and text", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("null %c and text", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 24 :\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%.03s|", "bada");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%.03s|", "bada");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%8.03s|", "bada");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%8.03s|", "bada");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 25 :      ** partie des etoiles **\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("|%*-*.***c|\n", 0, 10, 5, 40, 7, '?');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*-*.***c|\n", 0, 10, 5, 40, 7, '?');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("|%*-*.***c|\n", 0, 10, 5, 40, 7, NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*-*.***c|\n", 0, 10, 5, 40, 7, NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("|%*-*.**0*d|\n", 0, 10, 5, 40, 7, -123);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*-*.**0*d|\n", 0, 10, 5, 40, 7, -123);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("|%*-*.***0p|\n",10, 10, 5, 40, 7, NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("|%*-*.***0p|\n", 10, 10, 5, 40, 7, NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 25 :      test de 'abourin'\n\n\n");
	printf("\033[0m;");

		printf("\033[0;36m======================= TEST\033[0m 1\n");
		i = printf("%%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 2\n");
		i = printf("Hello 42 school! %s", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("Hello 42 school! %s", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 3\n");
		i = printf("%010%");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%010%");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 4\n");
		i = printf("%u", 4294967295);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%u", 4294967295);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 5\n");
		i = printf("%d\n", 2147483647);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%d\n", 2147483647);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 6\n");
		i = printf("%d\n", -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%d\n", -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 7\n");
		i = printf("%x\n", 2147483647);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%x\n", 2147483647);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 8\n");
		i = printf("%x\n", -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%x\n", -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 9\n");
		i = printf("%X\n", 2147483647);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%X\n", 2147483647);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 10\n");
		i = printf("%X\n", -2147483648);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%X\n", -2147483648);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 11\n");
		i = printf("%x\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%x\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 12\n");
		i = printf("%010x\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%010x\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 13\n");
		i = printf("%010x\n", 20);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%010x\n", 20);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 14\n");
		i = printf("%010x\n", -20);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%010x\n", -20);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 15\n");
		i = printf("%10x\n", 20);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%10x\n", 20);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 16\n");
		i = printf("%10.2x\n", -20);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%10.2x\n", -20);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 17\n");
		i = printf("%-10x\n", 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-10x\n", 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 18\n");
		i = printf("%-15x\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-15x\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 19\n");
		i = printf("%.1x\n", 500);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%.1x\n", 500);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 20\n");
		i = printf("%*.*x\n", 50, 10, 2);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%*.*x\n", 50, 10, 2);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 21\n");
		i = printf("%x\n", -1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%x\n", -1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 22\n");
		i = printf("%");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 23\n");
		i = printf("%40.50d\n", 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%40.50d\n", 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 24\n");

		i = printf("%d\n", -589);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%d\n", -589);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 25\n");

		i = printf("%-4d\n", -2464);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%-4d\n", -2464);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 26\n");

		i = printf("%.5d\n", -2372);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%.5d\n", -2372);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 27\n");

		i = printf("%p\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%p\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 28\n");

		i = printf("%015p\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%015p\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 29\n");

		i = printf("%15p\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%15p\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 30\n");

		i = printf("%-15p\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%-15p\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 31\n");

		i = printf("%%p::[%010d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%%p::[%010d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 32\n");
		i = printf("%%p::[%10d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%10d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 33\n");
		i = printf("%%p::[%.5d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%.5d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 34\n");
		i = printf("%%p::[%01.1d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%01.1d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 35\n");
		i = printf("%%p::[%010.1d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%010.1d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 36\n");
		i = printf("%%p::[%01.50d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%01.50d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 37\n");
		i = printf("%%p::[%1.50d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%1.50d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 38\n");
		i = printf("%%p::[%0100.50d]\n", -8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%0100.50d]\n", -8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 39\n");
		i = printf("%%p::[%010d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%010d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 40\n");
		i = printf("%%p::[%10d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%10d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 41\n");
		i = printf("%%p::[%.5d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%.5d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 42\n");
		i = printf("{%3c}", 0); printf("|fin");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("{%3c}", 0); printf("|fin");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 43\n");
		i = printf("%%p::[%01.1d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%01.1d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 44\n");
		i = printf("%%p::[%010.1d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%010.1d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 45 - 1\n");
		i = printf("%%p::[%01.50d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%01.50d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 46 - 2\n");
		i = printf("%%p::[%1.50d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%1.50d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 47\n");
		i = printf("%%p::[%0100.50d]\n", 8473);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%p::[%0100.50d]\n", 8473);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m================================================================ 2 \033[0m 2\n");
		printf("\033[0;36m======================= TEST\033[0m 48\n");
		i = printf("%c\n", 'a');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%c\n", 'a');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 49\n");
		i = printf("%10c\n", 't');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%10c\n", 't');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 50 - 1\n");
		i = printf("%1c\n", 'y');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%1c\n", 'y');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 51 - 2\n");
		i = printf("%010c\n", 't');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%010c\n", 't');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 52\n");

		i = printf("%50.2s\n", "Coucou");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%50.2s\n", "Coucou");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 53\n");

		i = printf("%50.2s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%50.2s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 54\n");

		i = printf("%5.0s\n", "Hello");;
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%5.0s\n", "Hello");;
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 55\n");

		i = printf("%.1s\n", "Test");;
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%.1s\n", "Test");;
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 56\n");

		i = printf("%10s\n", NULL);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%10s\n", NULL);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 57\n");

		i = printf("%10s\n", "Ok");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("%10s\n", "Ok");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 58\n");

		i = printf("Les bornes :  %d, %d\n", -2147483648, 2147483647);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("Les bornes :  %d, %d\n", -2147483648, 2147483647);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 59\n");

		i = printf("Les bornes :  %u, %u\n", 0, 4294967295);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("Les bornes :  %u, %u\n", 0, 4294967295);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 60\n");

		i = printf("Les bornes :  %x, %x\n", 0, 4294967295);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("Les bornes :  %x, %x\n", 0, 4294967295);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 61\n");

		i = printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 62\n");

		i = printf("2chiffre 1 %d chiffre 2 %d\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("2chiffre 1 %d chiffre 2 %d\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 63\n");

		i = printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		fflush(stdout);
		i = ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 64\n");
		i = printf("%i\n", -60);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%i\n", -60);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 65 - 1\n");
		i = printf("%i\n", -60);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%i\n", -60);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 65 - 2\n");
		i = printf("%1p\n", &t);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%1p\n", &t);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 66\n");
		i = printf("%1p\n", &t);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%1p\n", &t);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 67\n");
		i = printf("t1 %050d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t1 %050d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 68\n");
		i = printf("t2 %-50d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t2 %-50d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 69\n");
		i = printf("t3 %50.0d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t3 %50.0d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 70\n");
		i = printf("t4 %50.50d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t4 %50.50d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 71\n");
		i = printf("t5 %50.10d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t5 %50.10d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 72\n");
		i = printf("t6 %*.*d\n", 50,  5, 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t6 %*.*d\n", 50,  5, 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 73\n");
		i = printf("t7 %1.50d\n", -10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t7 %1.50d\n", -10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 74\n");
		i = printf("t8 %1.50d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t8 %1.50d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 75\n");
		i = printf("t9 %2.2d\n", 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t9 %2.2d\n", 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 76\n");
		i = printf("t10 %2.2d\n", -10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t10 %2.2d\n", -10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 77\n");
		i = printf("t11 %.0d\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t11 %.0d\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 78\n");
		i = printf("t13 %01d\n", -20);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t13 %01d\n", -20);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 79\n");
		i = printf("t14 %10d\n", 1000);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("t14 %10d\n", 1000);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 80\n");
		i = printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("5chiffre 1 %0d chiffre 2 %0d\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 81\n");
		i = printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("6chiffre 1 %012d chiffre 2 %012d\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 82\n");
		i = printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("8chiffre 1 %*d chiffre 2 %*d\n\n", 42, 6, 6, 6);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m================================================================ 4 \033[0m 2\n");

		printf("\033[0;36m======================= TEST\033[0m 83\n");
		i = printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("15chiffre 1 %.d chiffre 2 %.d\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 84\n");
		i = printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4caractere 1 %12c caractere 2 %12c\n\n", 'a', 'c');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 85\n");
		i = printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("1caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 86\n");
		i = printf("3caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("3caractere 1 %c caractere 2 %c\n\n", 'a', 'c');
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 87\n");
		i = printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 88\n");
		i = printf("3hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("3hexa-maj 1 %X hexa-maj 2 %X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 89\n");
		i = printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 90\n");
		i = printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 91\n");
		i = printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 92\n");
		i = printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 93\n");
		i = printf("8hexa-maj 1%*X hexa-maj 2%*X\n\n", 42, 6, 6, 6);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("8hexa-maj 1%*X hexa-maj 2%*X\n\n", 42, 6, 6, 6);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 94\n");
		i = printf("1pointeur 1%p pointeur 2%p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("1pointeur 1%p pointeur 2%p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 95\n");
		i = printf("3pointeur 1 %p pointeur 2%p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("3pointeur 1 %p pointeur 2%p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 96\n");
		i = printf("4pointeur 1 %12p pointeur 2 %12p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4pointeur 1 %12p pointeur 2 %12p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 97\n");
		i = printf("4pointeur 1 %-12p pointeur 2 %-12p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4pointeur 1 %-12p pointeur 2 %-12p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 98\n");
		i = printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("5pointeur 1 %0p pointeur 2 %0p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 99\n");
		i = printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("6pointeur 1 %012p pointeur 2 %012p\n\n", &c, &c);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 100\n");
		i = printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("1unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 101\n");
		i = printf("3unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("3unsigned 1 %u unsigned 2 %u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 102\n");
		i = printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4unsigned 1 %12u unsigned 2 %12u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 103\n");
		i = printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 104\n");
		i = printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("5unsigned 1 %0u unsigned 2 %0u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 105\n");
		i = printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("6unsigned 1 %012u unsigned 2 %012u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 106\n");
		i = printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("8unsigned 1 %*u unsigned 2 %*u\n\n", 42, 6, 6, 6);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 107\n");
		i = printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("15unsigned 1 %.u unsigned 2 %.u\n\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 108\n");
		i = printf("%s\n", 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%s\n", 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 109\n");
		i = printf("%%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 110\n");
		i = printf("%-.12u\n", -20000000);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-.12u\n", -20000000);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 111\n");
		i = printf("%-.12i\n", -20000000);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%-.12i\n", -20000000);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 112\n");
		i = printf("truc\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("truc\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 113\n");
		i = printf("bonjour !\n", 42, -42);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("bonjour !\n", 42, -42);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 114\n");
		i = printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 115\n");
		i = printf("percent 1 %012%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 1 %012%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 116\n");
		i = printf("percent 2 %12%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 2 %12%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 117\n");
		i = printf("percent 3 %-12%\n");;
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 3 %-12%\n");;
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 118\n");
		i = printf("percent 4 %0%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 4 %0%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 118\n");
		i = printf("percent 5 %%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 5 %%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 119\n");
		i = printf("percent 6 %15%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 6 %15%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 120\n");
		i = printf("percent 7 %12%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 7 %12%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 121\n");
		i = printf("percent 8 %*%\n", 13);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 8 %*%\n", 13);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 122\n");
		i = printf("%d\n", t);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%d\n", t);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 123\n");
		i = printf("1string 1%s string 2%s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("1string 1%s string 2%s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 124\n");
		i = printf("3string 1 %s string 2%s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("3string 1 %s string 2%s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 125\n");
		i = printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4string 1 %12s string 2 %12s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 126\n");
		i = printf("percent 7 %12%\n");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("percent 7 %12%\n");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 127\n");
		i = printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("4string 1 %-12s string 2 %-12s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 128\n");
		i = printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("5string 1 %0s string 2 %0s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 129\n");
		i = printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("6string 1 %012s string 2 %012s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 130\n");
		i = printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("7string 1 %-012s string 2 %012s\n\n", "toto", "bonjour");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 131\n");
		i = printf("%*d\n", 100, 1);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%*d\n", 100, 1);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 132\n");
		i = printf("%*d %*s, %*i\n", 10, 10, 5, "coucou", 4, 40);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%*d %*s, %*i\n", 10, 10, 5, "coucou", 4, 40);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

	printf("\033[1;31m");
	printf("\n=============================================================================\n");
	printf("******************** PART 26 :      test des etoile par 'abourin'\n\n\n");
	printf("\033[0m;");

	printf("\033[0;36m======================= TEST\033[0m 133\n");
		i = printf("st1 %*.*d\n", 10, 10, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st1 %*.*d\n", 10, 10, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 134\n");
		i = printf("st2 %*.*d\n", 1, 50, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st2 %*.*d\n", 1, 50, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 135\n");
		i = printf("st3 %*.*d\n", 0, 0, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st3 %*.*d\n", 0, 0, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 136\n");
		i = printf("st4 %*.*d\n", 0, 50, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st4 %*.*d\n", 0, 50, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 137\n");
		i = printf("st5 %*.*d\n", 10, 0, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st5 %*.*d\n", 10, 0, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 138\n");
		i = printf("st6 %*.*d\n", 10, 10, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st6 %*.*d\n", 10, 10, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 139\n");
		i = printf("st12 %*d\n", 10, 50);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st12 %*d\n", 10, 50);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 140\n");
		i = printf("st13 %*d\n", 0, 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st13 %*d\n", 0, 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 141\n");
		i = printf("st14 %.*d\n", 0, 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st14 %.*d\n", 0, 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 142\n");
		i = printf("st15 %*d\n", 50, 5);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st15 %*d\n", 50, 5);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 100\n");
		i = printf("st16 %0.*d\n", 50, 5);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st16 %0.*d\n", 50, 5);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 143\n");
		i = printf("st17 %0.*d\n", 0, 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st17 %0.*d\n", 0, 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 144\n");
		i = printf("st7 %*.*s\n", 1, 50, "hey");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st7 %*.*s\n", 1, 50, "hey");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 145\n");
		i = printf("st8 %*.*s\n", 0, 0, "coucou");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st8 %*.*s\n", 0, 0, "coucou");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 146\n");
		i = printf("st9 %*.*s\n", 0, 50, "hey");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st9 %*.*s\n", 0, 50, "hey");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 147\n");
		i = printf("st10 %*.*s\n", 10, 0, "dsa");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st10 %*.*s\n", 10, 0, "dsa");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 148\n");
		i = printf("st10 %*.*s\n", 10, 0, "dsa");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st10 %*.*s\n", 10, 0, "dsa");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 149\n");
		i = printf("st11 %*.*s\n", 10, 10, "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st11 %*.*s\n", 10, 10, "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 150\n");
		i = printf("st7 %0.*s\n", 50, "hey");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st7 %0.*s\n", 50, "hey");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 151\n");
		i = printf("st8 %.*s\n", 0, "coucou");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st8 %.*s\n", 0, "coucou");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 152\n");
		i = printf("st9 %*s\n", 0, "hey");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st9 %*s\n", 0, "hey");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 153\n");
		i = printf("st10 %*s\n", 10, "dsa");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st10 %*s\n", 10, "dsa");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 154\n");
		i = printf("st118 %*s\n", 100, "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st118 %*s\n", 100, "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 155\n");
		i = printf("st119 %*s\n", 200, "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st119 %*s\n", 200, "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 156\n");
		i = printf("st120 %*s\n", 50, "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st120 %*s\n", 50, "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 157\n");
		i = printf("st121 %*s\n", 50, "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st121 %*s\n", 50, "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 158\n");
		i = printf("st118 %*d\n", 50, 0);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st118 %*d\n", 50, 0);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 159\n");
		i = printf("st119 %*d\n", 50, 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st119 %*d\n", 50, 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 160\n");
		i = printf("st120 %*d\n", 800, 467);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st120 %*d\n", 800, 467);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 161\n");
		i = printf("st121 %*d\n", 800, -589);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("st121 %*d\n", 800, -589);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 162\n");
		i = printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 163\n");
		i = printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 500, 1, "hey", 10, 54700, 1, 300, 1000, -55, 1, -60);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 500, 1, "hey", 10, 54700, 1, 300, 1000, -55, 1, -60);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 164\n");
		i = printf("ultimate3 %*.*d %*.*s\n", 1, 50, 500, 1, 0, "hey");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 500, 1, 0, "hey");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 165\n");
		i = printf("ultimate4 %*.*x %*.*X\n", 1, 50, 500, 1, 0, 10);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 500, 1, 0, 10);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 166\n");
		i = printf("ultimate5 %*.*u\n", 1, 50, 500);
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("ultimate5 %*.*u\n", 1, 50, 500);
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 167\n");
		i = printf("taaa %100s\n", "hello");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("taaa %100s\n", "hello");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);

		printf("\033[0;36m======================= TEST\033[0m 167\n");
		i = printf("%*s|fin\n", -150, "coucou");
			fflush(stdout);
		printf("                                             \033[1;33mretour officiel   : %d\033[0m\n", i);
		i = ft_printf("%*s|fin\n", -150, "coucou");
		printf("                                             \033[1;33mretour unofficiel : %d\033[0m\n", i);
		// while (1)
		// 	;
		char	*str;

		str = "yayo";
		ft_printf("ft_printf = \"%0*.*d\"\n", 10, 5, 42);
		printf("   printf = \"%0*.*d\"\n\n", 10, 5, 42);
		printf("{%0*.*d}", 5, -15, 42); printf("|fin\n");
		ft_printf("{%0*.*d}", 5, -15, 42); printf("|fin\n");
		printf("valeur de retour = %d\n", ft_printf("ft_printf = \"%15p\"\n", str));
		printf("valeur de retour = %d\n\n", printf("   printf = \"%15p\"\n", str));
	return (0);
}
