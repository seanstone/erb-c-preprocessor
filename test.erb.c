#include <stdio.h>

@for i in 1..5@
int test_func_@=i@ (void)
{
    return @=i@;
}
@end@

int main (void)
{
    @for i in 1..5@
    printf("%d ", test_func_@=i@());
    @end@
    printf("\r\n");
    return 0;
}
