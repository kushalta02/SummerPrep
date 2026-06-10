// Program to read an amount (integer values) and break the amount into smallest poosible nymber of bank notes
#include<stdio.h>
int main(){
    int amount,h_notes,fif_notes,ten_notes,f_notes,two_notes,one_notes;
    printf("Enter the amount: ");
    scanf("%d",&amount);
    h_notes=amount/100;
    amount=amount%100;
    fif_notes=amount/50;
    amount=amount%50;
    ten_notes=amount/10;
    amount=amount%10;
    f_notes=amount/5;
    amount=amount%5;
    two_notes=amount/2;
    amount=amount%2;
    one_notes=amount;
    printf("%d = Note(s) of 100.00\n", h_notes);
    printf("%d = Note(s) of 50.00\n", fif_notes);
    printf("%d = Note(s) of 10.00\n", ten_notes);
    printf("%d = Note(s) of 5.00\n", f_notes);
    printf("%d = Note(s) of 2.00\n", two_notes);
    printf("%d = Note(s) of 1.00\n", one_notes);

}