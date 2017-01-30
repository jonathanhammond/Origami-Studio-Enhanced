/*  Generic non-class types used by QC objects. 2007.08 http://kineme.net/  */

struct GFNodeInfo {
    id _field1;
    id _field2;
    SEL _field3;
    SEL _field4;
    id _field5;
    id _field6;
};

typedef struct {
    float x;
    float y;
    float z;
} QCVector3;

/* QCBorderColor is used by a few methods for setting image/texture border colors */
typedef struct {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
} QCBorderColor;

typedef struct {
    float red;
    float green;
    float blue;
    float alpha;
} QCColor;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} QCVector4;

