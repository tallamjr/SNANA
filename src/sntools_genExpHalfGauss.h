
// March 20 2020: Generic struct for exponential and half gaussian. 
typedef struct {
  bool   USE;          // T => values are set 
  char   NAME[80];     // name of variable
  double EXP_TAU ;     // exponential component: exp(-x/EXP_TAU)
  double PEAK, SIGMA ; // peak & sigma of half gaussian component
  double RATIO ;       // Gauss(0)/Expon(0)
  double RANGE[2] ;    // generate random value in this RANGE
} GEN_EXP_HALFGAUSS_DEF ;


// ========= FUNCTION PROTOTYPES ==================

void init_GEN_EXP_HALFGAUSS(GEN_EXP_HALFGAUSS_DEF *gen_EXP_HALFGAUSS, double VAL );

void setUseFlag_GEN_EXP_HALFGAUSS(GEN_EXP_HALFGAUSS_DEF *gen_EXP_HALFGAUSS, char *name );

void set_GEN_EXPON(double tau, double *range, 
		   GEN_EXP_HALFGAUSS_DEF *gen_EXP_HALFGAUSS);

double exec_GEN_EXP_HALFGAUSS(GEN_EXP_HALFGAUSS_DEF *gen_EXP_HALFGAUSS);

void copy_GEN_EXP_HALFGAUSS(GEN_EXP_HALFGAUSS_DEF *inp_EXP_HALFGAUSS, GEN_EXP_HALFGAUSS_DEF *out_EXP_HALFGAUSS);

