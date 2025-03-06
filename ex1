#include <stdio.h>

int main()
{
    FILE*fp;
    int a[]={0,1,2};
    char b[]="ABC";
    float c[]={1.1,1.2,1.3};
    fp=fopen("a.bin","wb");
    int ra[3];
    char rb[4];
    float rc[3];
    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);
    fclose(fp);
    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),3,fp);
    fread(rc,sizeof(float),3,fp);
    rb[3]='\0';
    fclose(fp);
    printf(ra[0],ra[1],ra[2]);
    printf(rb);
    printf(rc[0],rc[1],rc[2])
    return 0;
}
