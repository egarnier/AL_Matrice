//============================================================================
//                       Class and Functions declarations
//============================================================================
// Create a class of Matrice that contains <rows>, <columns> and <data>

class Matrice{
 public:
  // Constructors
  Matrice(void);
  Matrice(const Matrice& mat);
  Matrice(int n, int p, int val);

  // Destructor
   virtual ~Matrice(void);

  // Getters
  int GetRow(void) const;
  int GetColumn(void) const;
  int** GetData(void) const;

  // Functions
  void affiche();
  void read_from_file(const char* name, int n, int p);
  
  
 private:
  int row;
  int column;
  int** data;
};