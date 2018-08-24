typedef struct _mycomplex {
  float r;
  float i;
} mycomplex;

mycomplex cadd (mycomplex a, mycomplex b) {
  mycomplex c;
  c.r = a.r + b.r;
  c.i = a.i + c.i;
  return c;
}

mycomplex cmult (mycomplex a, mycomplex b) {
  mycomplex c;
  c.r = a.r*b.r - a.i*b.i;
  c.i = a.r*b.i + a.i*b.r;
  return c;
}

mycomplex rcmult (float a, mycomplex b) {
  mycomplex c;
  c.r = a * b.r;
  c.i = a * b.i;
  return c;
}

mycomplex conj (mycomplex a) {
  mycomplex b;
  b.r = a.r;
  b.i = -a.i;
  return b;
}

bool ceq (mycomplex a, mycomplex b) {
  float diff = (((a.r - b.r)*(a.r - b.r) + (a.i - b.i)*(a.i - b.i))/(b.i*b.i + b.r*b.r+ 0.001));
  if (diff<0.0001) return true;
  else return false;
}

