#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/', out, &num ) ;

    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;
    }
    printf( "count = %d\n", num ) ;
    return 0 ;
}
void explode( char str1[], char splitter, char str2[][ 10 ], int *count ) {
    int i, j = 0 ;
    int length = strlen( str1 ) ;

    *count = 0 ;

    for ( i = 0 ; i < length ; i++ ) {
        if ( str1[ i ] != splitter ) {
            str2[ *count ][ j ] = str1[ i ] ;
            j++ ;
        } else {
            str2[ *count ][ j ] = '\0' ;
            ( *count )++ ;
            j = 0 ;
        }
    }
    str2[ *count ][ j ] = '\0' ;
    ( *count )++ ;
}
