#include <stdio.h>
struct myGoodsRec {
    int ID;
    char name[20];
    char type;
    float cost;
    float tax;
    float netPrice;
};
typedef struct myGoodsRec Goods;
Goods myGoods[100];
float findTax(Goods myGoods){
    float taxmult;
    if (myGoods.type == 'A'){
        taxmult = 0.1;
    } else if (myGoods.type == 'B'){
        taxmult = 0.15;
    } else if (myGoods.type == 'C'){
        taxmult = 0.2;
    } else {
        taxmult = 0.4;
    }
    return myGoods.cost * taxmult;
}
int main(){
    FILE* infile;
    FILE* outfile;
    int i,count=0;
    infile = fopen("goods.txt","r");
    while(fscanf(infile, "%d %s %c %f", &myGoods[count].ID, &myGoods[count].name, myGoods[count].type ,myGoods[count].cost)!= EOF){
        myGoods[count].tax = findTax(myGoods[count]);
        myGoods[count].netPrice = myGoods[count].cost + myGoods[count].tax;
        count++;
    }
    outfile = fopen("Report6809617241.txt", "w");
    fprintf(outfile, "ID\tName\tType\tCost\tTax\tNetPrice\n");
    for(i=0;i<count;i++){
        printf("%d\tt%s\t%c\t%.2f\t%.2f\t%.2f\n", myGoods[i].ID,myGoods[i].name,myGoods[i].type,myGoods[i].cost,myGoods[i].tax,myGoods[i].netPrice);
    }
    fclose(infile);
    fclose(outfile);
    return 0;
}