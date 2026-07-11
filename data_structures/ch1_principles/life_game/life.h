#define MAXROW 20 // maximum row range
#define MAXCOL 60 // maximum columns range

typedef enum state { DEAD, ALIVE } State;

void copy_map(Grid map, Grid new_map);
bool user_yes(void);
void init(Grid map);
int count_neighbors(Grid map, int row, int column);
void write_map(Grid map);
