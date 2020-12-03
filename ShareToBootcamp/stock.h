//--------------------------------
// Structure Types
//--------------------------------

struct SalesRecord
{
  int amout;    // typically Amout
  int category; // typically Category
  double price; // typically Price
  int byWeight; // typically beWeight
};

struct StockRecord
{
  struct SalesRecord salesRecord; // struct of SalesRecord
  char product[30];               // Chocolate cup cakes -> 19 words so in advance...haha
  double productId;               // typically product ID
};

// Clear the standard input buffer
void clearKeyboard(void);

// Get and store from standard input the values for SalesRecord
int readStockItems(struct StockRecord stockRecord[], int max, int bonus);

// Displying the title
void centreText(int num, char symbol, char *title);

// Displaying inventory status
void printStockReport(const struct StockRecord* storeStock, int prodID);
