typedef struct total 
{
    int car;
    int word;
    int line;
}tot;
/*allocation for the structure*/
void alloc(tot *total ,int argc);

/*the wc command without option*/
void word_count(FILE* file ,char *argv ,tot *total);
void open(FILE* file , char* argv);

/*with the -c option */
void wc_option_c(FILE *file , char *argv ,tot *total);

/*with the -l option */
void wc_option_l(FILE *file , char *argv ,tot *total);

/*with the -w option */
void wc_option_w(FILE *file , char *argv ,tot *total);

/*with the -l option */
void wc_option_L(FILE *file , char *argv);

/*if no option is typed*/ 
void wc_no_opt(FILE *file);

/*if you need help*/
void wc_help(FILE *file);

/*showing the total numbers of characters words and lines  with no option*/
void print_total(tot *total ,int argc);

/*showing the total numbers of characters words and lines  with option*/
void print_total_c(tot *total ,int argc);
void print_total_l(tot *total ,int argc);
void print_total_w(tot *total ,int argc);