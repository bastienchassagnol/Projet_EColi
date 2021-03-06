#ifndef LIGNEE_B
#define LIGNEE_B
//==============================
//    INCLUDES 
//==============================

/**
 * @class Bacteries
 * @brief Creates a Character
 */
#include "Bacterie.h"

class Lignee_B: public Bacterie
{
public:
//==============================
//    CONSTRUCTORS
//==============================
  Lignee_B();
  Lignee_B(float a, float b, float c);


//==============================
//    DESTRUCTOR
//==============================
  virtual ~Lignee_B();

//==============================
//    GETTERS
//==============================
  virtual float GetA_int();
  virtual float GetB_int();
  virtual float GetC_int();
  virtual char Gettype();
  virtual float& Getw();
  

//==============================
//    SETTERS
//==============================

//==============================
//    OPERATORS
//==============================

//==============================
//    PUBLIC METHODS
//==============================

  virtual void Describe();
  virtual Bacterie* Division();
  virtual int Death();
  /*virtual void Deplacement();*/
  virtual int Mute();
  static int nombre_B();
  virtual float absorb(float c, float h);
 

protected:
//==============================
//    PROTECTED METHODS
//==============================

//==============================
//    ATTRIBUTES
//==============================
float Rbb;
float Rbc;
float& w=C_int;
static int compteur_B;



//==============================
//    GETTER DEFINITION
//==============================


//==============================
//    SETTER DEFINITION
//==============================

//==============================
//    OPERATOR DEFINITION
//==============================
};

#endif // LIGNEE_B
