#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

#define sz 1001
char table[6][6];

typedef struct{
    int r;
    int c;
}data;

void remove_space(char s[]){
    int j = 0;
    for(int i = 0; s[i]; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void print_next(int r, int c){
    c++;
    if(c == 6) c = 1;
    printf("%c", table[r][c] - 32);
}

void print_down(int r, int c){
    r++;
    if(r == 6) r = 1;
    printf("%c", table[r][c] - 32);
}

void print_ch(int r, int c){
    printf("%c", table[r][c] - 32);
}

int main(){
    int i, T, row, col;
    char phrase[sz], in[sz], ta, tb;
    data ch[27];

	//freopen("i.txt", "r", stdin);

    scanf("%d", &T);
    getchar();
    while(T--){
        gets(phrase);
        gets(in);

        memset(ch, 0, sizeof(ch));
        memset(table, NULL, sizeof(table));

        remove_space(phrase);
        remove_space(in);

        row = col = 1;
        for(i = 0; phrase[i]; i++){
            if(!ch[phrase[i] - 'a'].r){
                if(col == 6)row++,col = 1;
                table[row][col] = phrase[i];
                ch[phrase[i] - 'a'].r = row;
                ch[phrase[i] - 'a'].c = col++;
            }
        }
        for(i = 0; i < 26; i++){
            if(i != 16 && !ch[i].r){
                if(col == 6)row++,col = 1;
                table[row][col] = i + 'a';
                ch[i].r = row;
                ch[i].c = col++;
            }
        }

        for(i = 0; in[i];){
            /*Condition 1*/
            ta = in[i];
            if(in[i + 1] && in[i] != in[i + 1]){
                tb = in[i + 1];
                i += 2;
            }else{
                tb = 'x';
                i++;
            }

            /*Condition 2*/
            if(ch[ta - 'a'].r == ch[tb - 'a'].r){
                print_next(ch[ta - 'a'].r, ch[ta - 'a'].c);
                print_next(ch[tb - 'a'].r, ch[tb - 'a'].c);
            }

            /*Condition 3*/
            else if(ch[ta - 'a'].c == ch[tb - 'a'].c){
                print_down(ch[ta - 'a'].r, ch[ta - 'a'].c);
                print_down(ch[tb - 'a'].r, ch[tb - 'a'].c);
            }

            /*Condition 4*/
            else{
                print_ch(ch[ta - 'a'].r, ch[tb - 'a'].c);
                print_ch(ch[tb - 'a'].r, ch[ta - 'a'].c);
            }
        }
        printf("\n");
    }

    return 0;
}
