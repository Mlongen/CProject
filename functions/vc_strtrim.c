/* ************************************ */
/*                                      */
/* vc_strtrim.c                         */
/*                                      */
/* By:Javier                            */
/*                                      */
/* ************************************ */
#include <stdio.h>
char *vc_strtrim(char const *s)
{
    int i[2];
    char *result;
    if(s == NULL)
        return(NULL);
        i[0]=0;
        result = vc_memalloc(vc_strlen(s));
        vc_memcpy(result,s,vc_strlen(s));
        while(result[i[0]]&& (result[i[0]]==' ' 
        || result[i[0]] == '\n' || result[i[0]] == '\t'))
        {
            i[0]++;
        }
        i[1]= vc_strlen(s)-1;
        while(i[1]>0)
        {
            if(result[i[1]]== ' ' ||  
            result[i[1]] == '\n' || result[i[1]] == '\t')
                i[1];

            else
            {
                result [i[1]+1]='\0';
                break;

            }
        }
        return(vc_strdup(&result[i[0]]));
        
}



