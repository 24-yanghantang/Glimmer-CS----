// 首先,双击选定一个单词。
// 然后按下Ctrl+D,VScode会自动选中所有相同的单词。
// 接下来,你可以对这些选中的单词进行统一修改。
// 除了Ctrl+D,还有一些其他相关的快捷键和技巧:

// Ctrl+H:用于在当前文件中进行替换操作。
// Ctrl+F:用于查找文本。
// Alt+C:可以重新命名标签内的内容。
// Shift+Alt+上下箭头:快速复制当前行到上一行或下一行。
// Ctrl+Shift+L:选中所有相同的词,方便进行批量删除或修改‌
//#include <stdio.h>
// int main(){
//    int c;
// 	scanf("%c",c);
//    while(c!=0){ 
// 	printf("%c",c);
// 	scanf("%c",c);
// 	}
// return 0; 
// }


// 7              7->4
//     *4=6/2+1        3+*
//    * *35          2+*+1+*
//   *   *26         1+*+3+*
//  *     *17          *+5+*   printf('*');
  //  printf('\n');
// 7 

//void print(int n){
//    int a=n/2;
//    int left=a-1;
//    int mid=1;
//    int i;
//    for(i=left+1;i>0;i--){
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    for(a=n/2;a>0;a--){
//        for(i=left;i>0;i--){
//            printf(" ");
//        }
//        printf("*");
//        for(i=mid;i>0;i--){
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//        left--;
//        mid+=2;
//    }
//    left++;
//    mid-=2;
//    for(a=n/2-1;a>0;a--){
//    	left++;
//        mid-=2;
//        for(i=0;i<left;i++){
//            printf(" ");
//        }
//        printf("*");
//        for(i=0;i<mid;i++){
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//    }
//    for(i=left+1;i>0;i--){
//            printf(" ");
//        }
//        printf("*");
//        printf("\n");
//}
//int main(){
//    print(5);
//    return 0;
//}

//int main(){
//	char a[]="00000000000000000000000000";
////	char*c=&a[0];
//	for(int i=0;a[i]!='a';i++){
//		a[i]=getchar();
//	}
//	printf("%s",a);
//}

//int main(){
//	while
//}




//int main(){
//
//	char a[]="abcd";
//	for(int i=0;a[i]!=0;i++){
//	putchar(a[i]);
//	}
//	
//
//	return 0;
//}

//int main(){
//	int ch=getchar();
//	int a[50];
//	int i=0;
//	while(ch!=0){
//	a[i]=ch;
//	ch=getchar();
//	i++;
//	}
////	printf("%s",a);

		

//	return 0;
//}


////ctrl+z���� 
//int main(){
//	int ch;
//	while((ch=getchar())!=EOF){
//	putchar(ch);	
//	}
//	printf("EOF\n");
//	return 0;
//}


//int main(){
//	char a[]="s d p";
//	for(int i=0;a[i]!=0;i++){
//	printf("%c\n",a[i]);
//	}
//	return 0;
//}scanf("%d",&a)

//int main(){
//	char *a;
//	while(*a!=0){
//		*a=getchar();
//	}
//	printf("%d");
//	return 0;
//}


//	char Sa[20],Sb[20];
//	for(i=0;i<sizeof(S2);i++){
//        Sa[i/2]=S2[i];
//        i++;
//        Sb[i/2]=S2[i];
//    }







//int main(){
//	printf("\n");
//	printf("\n"); 
//	printf("\n"); 
//	printf("\n");
//	printf("\n"); 
//	printf("\n"); 
//	printf("\n"); 
//	printf("\n"); 
//	return 0;
//}




//int main(){
//	int i=0;
//	for(i=0;i<129;i++){
//		printf("%d:%c\t",i,i);
//	};
//	return 0;
//}


//int main(){
//	printf("_\n");
//	printf("__\n");
//	printf("___\n");
//	printf("____\n");
//	printf("_____\n");
//	printf("______\n");
//	printf("_______\n");
//	printf("________\n");
//	printf("_________\n");
//	printf("__________\n");
//	printf("___________\n");
//	printf("____________\n");
//	printf("_____________\n");
//	printf("______________\n");
//	printf("_______________\n");
//	printf("________________\n");
//	printf("_________________\n");
//	printf("__________________\n");
//	printf("___________________\n");
//	printf("____________________\n");
//	printf("_____________________\n");
//	printf("______________________\n");
//	printf("_______________________\n");
//	printf("________________________\n");
//	printf("_________________________\n");
//	printf("__________________________\n");
//	printf("___________________________\n");
//	printf("____________________________\n");
//	printf("_____________________________\n");
//	printf("______________________________\n");
//	printf("_______________________________\n");
//	printf("________________________________\n");
//	return 0;
//}



//#include <stdio.h>
//int main(){
//	char a[10]; 
//	printf("%s\n",a);
//	char*p=&a;
//	scanf("%c",p);
//	printf("%c,%d\n",*p,*p);
//	while(*p!=10)
//	{
//		printf("%p\n",p);
//		p++;
//		
//		scanf("%c",p);
//		printf("%c,%d\n",*p,*p);
//	}
//	printf("%s",a);
//	return 0;
//} 

//#include <stdio.h>
//int main(){
//    int b;
//    char a1[20];
//	char*p=a1;
//	scanf("%c",p);
//	while(*p!=10)
//	{
//		p++;
//		scanf("%c",p);
//	}
//    scanf("%d",&b);int i;
//	for( i=0;i<sizeof(a1)/sizeof(a1[0]);i++)
//	{
//		if(a1[i]>='a'&&a1[i]<='z')
//		{
//			if(a1[i]>'z'-b)
//			{
//				a1[i]-=26;
//			}
//			a1[i]=a1[i]+b;
//		}
//		if(a1[i]>='A'&&a1[i]<='Z')
//		{
//			if(a1[i]>'Z'-b)
//			{
//				a1[i]-=26;
//			}
//			a1[i]=a1[i]+b;
//		}
//    }
//    printf("%s",a1);
//    return 0;
//}




//���������Random Walk��
//
//��д��������һ�ֹᴩ10��10�ַ����飨��ʼʱȫΪ�ַ�'.'���ġ������������
//�����������ش�һ��Ԫ�ء��ߵ�����һ��Ԫ�أ�ÿ�ζ����ϡ����¡�����������ƶ�һ��Ԫ��λ�á�
//�ѷ��ʹ���Ԫ�ذ�����˳������ĸA��Z���б�ǡ�
//
//������һ�����ʾ����
//
//A	.	.	.	.	.	.	.	.	.
//B	C	D	.	.	.	.	.	.	.
//.	F	E	.	.	.	.	.	.	.
//H	G	.	.	.	.	.	.	.	.
//I	.	.	.	.	.	.	.	.	.
//J	.	.	.	.	.	.	.	Z	.
//K	.	.	R	S	T	U	V	Y	.
//L	M	P	Q	.	.	.	W	X	.
//.	N	O	.	.	.	.	.	.	.
//����srand������rand���������������Ȼ��鿴��������4��������
//����һ����4�ֿ��ܵ�ֵ��0��1��2��3����ָʾ��һ���ƶ���4�ֿ��ܷ���
//��ִ���ƶ�֮ǰ����Ҫ����������ݣ�һ�ǲ����ߵ��������棬���ǲ����ߵ�������ĸ��ǵ�λ�á�
//ֻҪһ�����������㣬�͵ó��Ի�һ�������ƶ������4�����򶼶�ס�ˣ�����ͱ�����ֹ�ˡ�
//��������ǰ������һ��ʾ��:
//
//A	B	G	H	I	.	.	.	.	.
//.	C	F	O	J	K	.	.	.	.
//.	D	E	N	M	L	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//.	.	.	.	.	.	.	.	.	.
//��ΪY��4�����򶼶�ס�ˣ�����û�еط����Է�����һ����Z�ˡ�
//#include<stdlib.h>
//#include<time.h>
//int main(){
//    srand (time(0));
//    int number = rand()%4;
//    // char a[][]={{.,.,.,.,.,.,.,.,.,.,}}
//    char a[10][10]=
//    {
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//    }
//    int x=0,y=0;
//    char w='A';
//    while(1){
//        number = rand()%4;
//        if(()){
//            
//        }
//        
//    }
//    
//    return 0;
//}
//
//
//	
//	{
//		if(a[x-1]!='.')
//	}else{
//		
//	}
//	
//	if(a[x+1]!='.')
//	if(a[y-1]!='.')
//
// swich(number){
//         case 0:
//         	if(a[y+1]!='.')
//            y++;break;
//         case 1:
//            y--;break;
//         case 2:
//            x--;break;
//         case 3:
//            x++;break;
//     	}




//#include <stdio.h>
//int main(){
//	long x=0;
//	int mask=1;
//	int d=0;
//	scanf("%ld",&x);
//	long t=x;
//	int a[10]={0,0,0,0,0,0,0,0,0,0,};
//	while(t>9){
//		t/=10;
//		mask*=10;
//	}
//	do{
//		d=x/mask;
//        a[d]++;
//		x%=mask;
//		mask/=10;
//	}while(mask>0);
//	printf("Digit: 0 1 2 3 4 5 6 7 8 9\n");
//	printf("Occurrences:");
//	for(int i=0;i<10;i++){
//	    printf(" %d",a[i]);
//	}
//	return 0;
//}



//int main(){
//    double a[20];
//    for(int i=0;a[i]==0;i++){
//	scanf("%lf",a[i])
//
//
//
//	}
//return 0;    
//}
//    double a;
//scanf("%lf",&a);
//printf("%f",a);
    
    

// int main(){
//     char a[50];
//     double b;
//     int e[10];
//     int c;//��λ��
//     int d;//��λ��
//     scanf("%s",a);
//     for(int i=0;i<(sizeof(a));i++){
//         if(a[i]=='.'){
//         }
//         (){
//         if((a[i]=='+')||(a[i]=='-')||(a[i]=='*')||(a[i]=='/')){
//         }
//         }
//     }
//     printf("%f",b)
//     return 0;
// }


//#include <stdio.h>
//int main(){
//    double a[50]={0};
//    char b[20];
//    int i=0,j=0;
//    double c=0;
////    scanf("%lf",&c);
//    do{		
//		scanf("%lf",&a[i]);
//		scanf("%c",&b[i]);
//	
//        if(b[i]==10){
//				break;
//			}
//			i++; 
//		
//        }while(1);
//    
//	c+=a[0];
////	printf("%d\n",i);
//	int d=0;
////	for(;d<=i;d++){
////		printf("%lf ",a[d]);
////		printf("\n");
////		printf("%c",b[d]);
////	};
//    for(j=0;j<=1+i;j++){
//            if(b[j]=='+'){
//                c+=a[j+1];
//            }else if(b[j]=='-'){
//                c-=a[j+1];
//            }else if(b[j]=='*'){
//                c*=a[j+1];
//            }else if(b[j]=='/'){
//                c/=a[j+1];
//            }else{
//                break;
//            };
//        };
//printf("%lg",c);  
//}

//int main(){
//	int a[2]={1,2};
//
//	printf("%d\n",a[2]);
//	
//	return 0;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int walk(int*x,int*y,char a[10][11]);
//int main(){
//    // // char a[][]={{.,.,.,.,.,.,.,.,.,.},{.,.,.,.,.,.,.,.,.,.},
//    // {.,.,.,.,.,.,.,.,.,.},{.,.,.,.,.,.,.,.,.,.},
//    // {.,.,.,.,.,.,.,.,.,.},{.,.,.,.,.,.,.,.,.,.},
//    // {.,.,.,.,.,.,.,.,.,.},{.,.,.,.,.,.,.,.,.,.},
//    // {.,.,.,.,.,.,.,.,.,.},{.,.,.,.,.,.,.,.,.,.},}walk(&x,&y);while(1){
//    // }
//    //w=walk(&x,&y);
//    //
//    char a[10][11]={
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//    };
//    int i=0,j=0;
//    int x=0,y=0;
//    char ch='A';
//    int w=0;
//    while(1){
//        a[x][y]=ch;
//        do{w=walk(&x,&y,a);}while(w==1);
//        ch++;
//        if((a[x][y+1]!='.')&&(a[x][y-1]!='.')&&(a[x+1][y]!='.')&&(a[x-1][y]!='.')){
//            break; 
//        } 
//    }
////���
//    for(i=0;i<10;i++){
//        for(j=0;j<10;j++){
//        printf("%c",a[i][j]); 
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int walk(int*x1,int*y1,char a[10][11]){
//    int x=*x1;
//    int y=*y1;
//	srand (time(0));
//    int number = rand()%4;
//    int i=0;
//switch(number){
//        case 0:if(a[x][y+1]=='.'){y++;break;}else{i=1;break;};
//        case 1:if(a[x][y-1]=='.'){y--;break;}else{i=1;break;};
//        case 2:if(a[x-1][y]=='.'){x--;break;}else{i=1;break;};
//        case 3:if(a[x+1][y]=='.'){x++;break;}else{i=1;break;};
//        }
//        return i;
//}


//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int walk(int*x,int*y,char a[10][11]);
//int main(){
//    
//
//    char a[10][11]={
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//        "..........","..........",
//    };
//    int i=0,j=0;
//    int x=0,y=0;
//    char ch='A';
//    a[x][y]=ch;
//    int w=0;
//    while(1){
//        
//        printf("%c(%d,%d)\n",ch,x,y);
//        w=walk(&x,&y,a);
//		
//		
//		ch++;
//		
//        if(ch<='Z'){
//			if(w==1){
//	                 if(a[x][y+1]=='.'){y++;}
//	            else if(a[x][y-1]=='.'){y--;}
//	            else if(a[x+1][y]=='.'){x++;}
//	            else if(a[x-1][y]=='.'){x--;}
//	            else{break;} 
//			}
//        }    
//        else{break;}	
//		a[x][y]=ch;
//	}
//		
//        
////���
//printf("\n");
//    for(i=0;i<10;i++){
//        for(j=0;j<10;j++){
//        printf("%c",a[i][j]); 
//        }
//        printf("\n");
//    }
//    return 0;
//}
//int walk(int*x,int*y,char a[10][11]){
//
////	srand (time(0));
//    int number = rand()%4;
//    printf("%d",number);
//    int i=0;
//switch(number){
//        case 0:if(a[*x][*y+1]=='.'){(*y)++;break;}else{i=1;break;};
//        case 1:if(a[*x][*y-1]=='.'){(*y)--;break;}else{i=1;break;};
//        case 2:if(a[*x-1][*y]=='.'){(*x)--;break;}else{i=1;break;};
//        case 3:if(a[*x+1][*y]=='.'){(*x)++;break;}else{i=1;break;};
//        }
//        return i;
//}



//int main(){
//	char a[50];
//	scanf("%4s",a);
//	int i=0;
//	for(i=0;a[i]!=0;i++){
//		printf("%c",a[i]);
//		}
//	printf("\n%d",sizeof(a));
//	return 0;
//} 

//int main(){
//	int a,b;
//	b=scanf("%d",&a);
//	printf("%d",b);
//	return 0;
//}


//#define SIZE 20
//#include<stdio.h>
//void compare(char small[SIZE],char large[SIZE]);
//void swap(char small[SIZE],char large[SIZE]);
//int main(){
//	char large[SIZE];char small[SIZE];
//	scanf("%s %s",small,large);
//	int a=0;
//	for(a=0;large[a]!='\0';a++){
//		}
//	compare(small,large);
//	char word[SIZE];
//	if(a==4){
//		goto o;
//	}
//	while(1){
//		scanf("%s",word);
//		for(a=0;word[a]!='\0';a++){
//		};
//		compare(small,word);
//		compare(small,large);
//		compare(word,large);
//		compare(small,large);
//		if(a==4){
//			break;
//		}
//	}
//	o: 
//	printf("Smallest word: %s\n",small);
//	printf("Largest word: %s\n",large);
//	
//return 0;
//}	
//void compare(char small[SIZE],char large[SIZE]){
//	int i=0;
//	for(i=0;large[i]!=0;i++){
//		if(small[i]>large[i]){
//			swap(small,large);
//			break;
//		}
//	}
//	return;
//}
//void swap(char small[SIZE],char large[SIZE]){
//	int i=0;
//	char word[SIZE];
//	for(i=0;i<SIZE;i++){
//		word[i]=small[i];
//		small[i]=large[i];
//		large[i]=word[i];
//	}
//	return;
//}
////	int a;if i==3
//for(i=0;i<10;i++){
//				
//			}
//			break;
//	while(){
//	}
//	scanf("%s",word1);
//if(small<large){
//	printf("%s<%s",small,large);
//	}else{
//	printf("%s>%s",small,large);
//	}


//#include<stdio.h>
//#include<string.h>
//#define SIZE 20
//void swap(char a[],char b[]){
//	char c[SIZE];
//	strcpy(c,a);
//	strcpy(a,b);
//	strcpy(b,c);
//	return; 
//}
//void cmp(char a[],char max[],char min[]){
//	if(strcmp(max,a)<0){
//    	swap(max,a);
//	}else if(strcmp(a,min)<0){
//    	swap(a,min);
//	}	
//	return;
//}
//int main(){
//	int i=1;
//	char max[SIZE],min[SIZE],a[SIZE];
//	scanf("%s%s",max,min);
//	if(strcmp(max,min)<0){
//		swap(max,min);
//	};
//	while(1){
//		scanf("%s",a);
//		if(4==strlen(a)){
//            break;
//        }
//		cmp(a,max,min);
//    }
//    cmp(a,max,min);
//	printf("Smallest word: %s\nLargest word: %s",min,max);
//	return 0;
//}

//#include<stdio.h>
//int main(){
//    char a[20];
//    int i=0;
//	while((a[i]=getchar())!='\n'){
//		i++;
//	} 
//    for(;i>=0;i--){
//        putchar(a[i]);
//    }
//    return 0;
//}


//  #define _CRT_SECURE_NO_WARNINGS 1
//  #include <stdbool.h>   /* C99 only */
// #include <stdio.h>
// #include <stdlib.h>

// #define STACK_SIZE 100
// /* external variables */
// char contents[STACK_SIZE];
// int top = 0;


// void stack_overflow(void)
// {
//     printf("Stack overflow\n");
//     exit(EXIT_FAILURE);
// }

// void stack_underflow(void)
// {
//     printf("Stack underflow\n");
//     exit(EXIT_FAILURE);
// }


// void make_empty(void)
// {
//     top = 0;
// }

// bool is_empty(void)
// {
//     return top == 0;
// }

// bool is_full(void)
// {
//     return top == STACK_SIZE;
// }

// void push(char ch)
// {
//     if (is_full())
//         stack_overflow();
//     else
//         contents[top++] = ch;
// }

// char pop(void)
// {
//     if (is_empty())
//         stack_underflow();
//     else
//         return contents[--top];

//     return '\0'; /* prevents compiler warning due to stack_underflow() call */
// }

// char reverse(char c) {
//     if (c == '}') {
//         return '{';
//     }
//     if (c == ']') {
//         return '[';
//     }
//     return '(';
// }

// int main(void)
// {
//     int flag = 0;
//     printf("Enter parentheses and/or braces: ");
//     char braces[100] = { '/0' };
//     scanf("%s", braces);
//     for (int i = 0; i < 100; i++) {
//         if (braces[i] == 0) {
//             break;
//         }
//         if (braces[i] == '(' || braces[i] == '[' || braces[i] == '{') {
//             push(braces[i]);
//         }
//         else {
//             if (!is_empty() && reverse(braces[i]) == contents[top - 1]) {
//                 pop();
//             }
//             else {
//                 flag = 0;
//             }
//         }

//     }
//     if (top == 0) {
//         flag = 1;
//     }
//     if (flag == 0) {
//         printf("Parentheses/braces are NOT nested properly");
//     }
//     else
//     {
//         printf("Parentheses/braces are nested properly");
//     }
//     return 0;
// }
//#define S 50
//#include <stdio.h>
//char reverse(char c) {
//    if (c == '}') {
//        return '{';
//    }else if (c == ']') {
//        return '[';
//    }else{
//        return '(';
//    }
//}
//int main(void)
//{
//    int i=0;
//    int j=0;
//    char a[S];
//    char b[S];
//    scanf("%s",a);
//    for(i=0;i<=S;i++){
//        if (a[i] == '(' || a[i] == '[' || a[i] == '{'){
//            b[j]=a[i];
//            j++;
//        }
//        if(a[i] == ')' || a[i] == ']' || a[i] == '}'){
//            j--;
//			while(a[i] == ')' || a[i] == ']' || a[i] == '}'){
//				if(b[j]==reverse(a[i])){
//                    b[j]=0;
//                    if(j==0){
//                		break;
//            		}else{
//						j--;
//					}
//                    i++;
//                }else{
//                    goto out;
//                }
//	    	}
//			if(j!=0){
//	           	goto out;    
//            }  
//        }
//        if((a[i])=='\0'){
//            break;
//        }
//	}
//    printf("Parentheses/braces are nested properly");
//    return 0;
//    out:
//    printf("Parentheses/braces are NOT nested properly");
//	return 0;
//}
//
//   
// #include<stdio.h>
// int main(){
// 	char s[10];
// 	int a=0,b,c,i;
// //	char ch=' ';
// //	printf("%d",ch);
// 	while(1){
// 	gets(s);
// 	printf("%s\n",s);
// 				a=s[2]-'0';
// 				b=s[4]-'0';
// 				c=s[6]-'0';
// 	printf("\n%d %d %d\n",a,b,c);
// 	a=0;
// 	for(i=2;s[i]!=32&&s[i]!=0;i++){
// 					a=10*a+(s[i]-'0');}
// 	printf("%d\n",a);
// 	}
// 	return 0;
// } 

//#include <stdio.h>
//#include <stdlib.h>
//
//const int constValue = 100;
//const char* constString = "Hello, World!";
//int globalVar = 10;
//
//void function(int arg) {
//    int localVar = 20;
//    int *ptr = (int*)malloc(sizeof(int));
//    *ptr = 30;
//	printf("localVar\t\t%p\n",&localVar);
//	printf("ptr\t\t\t%p\n",&ptr);
//    free(ptr);
//}
//
//int main() {
//    static int staticVar = 40;
//    int localVarMain = 50;
//    function(60);
//	printf("constValue\t\t%p\n",&constValue);
//	printf("constString\t\t%p\n",&constString);
//	printf("globalVar\t\t%p\n",&globalVar);
//	printf("staticVar\t\t%p\n",&staticVar);
//	printf("localVarMain\t\t%p\n",&localVarMain);
//    return 0;
//}
	
// #include <stdio.h>

// int fibonacci(int n) {
//     static int cache[1000]; // Assuming a large enough cache size
//     if (cache[n] != 0) {
//         return cache[n];
//     }
//     int result;
//     if (n == 0 || n == 1) {
//         result = n;
//     } else {
//         result = fibonacci(n - 1) + fibonacci(n - 2);
//     }
//     cache[n] = result;
//     return result;
// }

// int main() {
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", fibonacci(i));
//     }
//     return 0;
// }

//#include <stdio.h>
//#include <string.h>
//
//// Compare the absolute values of two large numbers
//int compareAbs(char num1[], char num2[]) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    if (len1 > len2) return 1;
//    if (len1 < len2) return 0;
//    return strcmp(num1, num2) >= 0;
//}
//
//// Subtraction of large numbers (num1 - num2, assuming the absolute value of num1 is greater than or equal to the absolute value of num2)
//void subtract(char num1[], char num2[], char result[]) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    int borrow = 0;
//    int i = len1 - 1, j = len2 - 1, k = 0;
//    while (j >= 0) {
//        int diff = (num1[i] - '0') - (num2[j] - '0') - borrow;
//        if (diff < 0) {
//            diff += 10;
//            borrow = 1;
//        } else {
//            borrow = 0;
//        }
//        result[k++] = diff + '0';
//        i--;
//        j--;
//    }
//    while (i >= 0) {
//        int diff = (num1[i] - '0') - borrow;
//        if (diff < 0) {
//            diff += 10;
//            borrow = 1;
//        } else {
//            borrow = 0;
//        }
//        result[k++] = diff + '0';
//        i--;
//    }
//    // Remove leading zeros
//    while (k > 1 && result[k - 1] == '0') {
//        k--;
//    }
//    result[k] = '\0';
//    // Reverse the result
//	int a,b; 
//    for ( a = 0, b = k - 1; a < b; a++, b--) {
//        char temp = result[a];
//        result[a] = result[b];
//        result[b] = temp;
//    }
//}
//
//// Addition of large numbers
//void add(char num1[], char num2[], char result[]) {
//    int len1 = strlen(num1);
//    int len2 = strlen(num2);
//    int carry = 0;
//    int i = len1 - 1, j = len2 - 1, k = 0;
//    while (i >= 0 || j >= 0 || carry) {
//        int sum = carry;
//        if (i >= 0) sum += num1[i--] - '0';
//        if (j >= 0) sum += num2[j--] - '0';
//        carry = sum / 10;
//        result[k++] = (sum % 10) + '0';
//    }
//    // Remove leading zeros
//    while (k > 1 && result[k - 1] == '0') {
//        k--;
//    }
//    result[k] = '\0';
//    // Reverse the result
//	int a,b;
//    for ( a = 0, b = k - 1; a < b; a++, b--) {
//        char temp = result[a];
//        result[a] = result[b];
//        result[b] = temp;
//    }
//}
//
//// Process large number addition (including positive and negative numbers)
//void addBigNumbers(char num1[], char num2[], char result[]) {
//    int isNegative1 = (num1[0] == '-');
//    int isNegative2 = (num2[0] == '-');
//    if (isNegative1 && isNegative2) {
//        // Both are negative numbers, the result is negative, add absolute values
//        char absNum1[129];
//        char absNum2[129];
//        strcpy(absNum1, num1 + 1);
//        strcpy(absNum2, num2 + 1);
//        char absResult[129];
//        add(absNum1, absNum2, absResult);
//        result[0] = '-';
//        strcpy(result + 1, absResult);
//    } else if (isNegative1) {
//        // num1 is negative, num2 is positive
//        char absNum1[129];
//        strcpy(absNum1, num1 + 1);
//        if (compareAbs(absNum1, num2)) {
//            // Absolute value of negative number is greater, result is negative, subtract
//            char subResult[129];
//            subtract(absNum1, num2, subResult);
//            result[0] = '-';
//            strcpy(result + 1, subResult);
//        } else {
//            // Absolute value of positive number is greater, result is positive, subtract
//            subtract(num2, absNum1, result);
//        }
//    } else if (isNegative2) {
//        // num2 is negative, num1 is positive
//        char absNum2[129];
//        strcpy(absNum2, num2 + 1);
//        if (compareAbs(absNum2, num1)) {
//            // Absolute value of negative number is greater, result is negative, subtract
//            char subResult[129];
//            subtract(absNum2, num1, subResult);
//            result[0] = '-';
//            strcpy(result + 1, subResult);
//        } else {
//            // Absolute value of positive number is greater, result is positive, subtract
//            subtract(num1, absNum2, result);
//        }
//    } else {
//        // Both are positive numbers, add directly
//        add(num1, num2, result);
//    }
//}
//
//int main() {
//    char num1[129];
//    char num2[129];
//    char result[129];
//    scanf("%s %s", num1, num2);
//    addBigNumbers(num1, num2, result);
//    printf("%s\n", result);
//    return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//void extract_operators_and_operands(char *expression, int *operands, char *operators) {
//    int operand_index = 0;
//    int operator_index = 0;
//    char current_operand[10] = ""; // Assuming maximum operand length of 10
//
//    for (int i = 0; i < strlen(expression); i++) {
//        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
//            if (strlen(current_operand) > 0) {
//                operands[operand_index++] = atoi(current_operand);
//                strcpy(current_operand, "");
//            }
//            operators[operator_index++] = expression[i];
//        } else {
//            strncat(current_operand, &expression[i], 1);
//        }
//    }
//
//    if (strlen(current_operand) > 0) {
//        operands[operand_index++] = atoi(current_operand);
//    }
//}
//
//int main() {
//    char expression[100];
//    scanf("%s",expression);
//    int operands[10]={};
//    char operators[10]={};
//    
//    extract_operators_and_operands(expression, operands, operators);
//
//    printf("Operands: ");
//    for (int i = 0; i < sizeof(operands) / sizeof(operands[0]); i++) {
//        if (operands[i] != 0) {
//            printf("%d ", operands[i]);
//        }
//    }
//    printf("\n");
//
//    printf("Operators: ");
//    for (int i = 0; i < sizeof(operators) / sizeof(operators[0]); i++) {
//        if (operators[i] != 0) {
//            printf("%c ", operators[i]);
//        }
//    }
//    printf("\n");
//
//    return 0;
//}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char** extract_numbers(const char* expression) {
    char** numbers = NULL;
    int count = 0;
    const char* number_start = expression;
	int i;
    for ( i = 0; i < strlen(expression); i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            count++;
            i++;
            while (expression[i] >= '0' && expression[i] <= '9') {
                i++;
            }
        }
    }

    if (count > 0) {
        numbers = (char**)malloc(count * sizeof(char*));
        count = 0;
		int i;
        for ( i = 0; i < strlen(expression); i++) {
            if (expression[i] >= '0' && expression[i] <= '9') {
                int num_start = i;
                i++;
                while (expression[i] >= '0' && expression[i] <= '9') {
                    i++;
                }
                int num_length = i - num_start;
                char* num = (char*)malloc((num_length + 1) * sizeof(char));
                strncpy(num, expression + num_start, num_length);
                num[num_length] = '\0';
                numbers[count++] = num;
            }
        }
    }
    
    return numbers;
}

char* extract_operators(const char* expression) {
    char* operators = NULL;
    int count = 0;
	int i;
    for ( i = 0; i < strlen(expression); i++) {
        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
            count++;
        }
    }

    if (count > 0) {
        operators = (char*)malloc((count + 1) * sizeof(char));
        count = 0;
		int i;
        for ( i = 0; i < strlen(expression); i++) {
            if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
                operators[count++] = expression[i];
            }
        }
        operators[count] = '\0';
    }
    
    return operators;
}

int main() {
    char expression[100];
    printf("Enter expression: ");
    fgets(expression, sizeof(expression), stdin);
    expression[strcspn(expression, "\n")] = 0;

    char** nums = extract_numbers(expression);
    char* ops = extract_operators(expression);

    printf("Numbers: ");
	int i;
    for ( i = 0; nums[i] != NULL; i++) {
        printf("%s ", nums[i]);
        free(nums[i]);
    }
    free(nums);
    printf("\n");

    printf("Operators: %s\n", ops);
    free(ops);

return 0;
}
