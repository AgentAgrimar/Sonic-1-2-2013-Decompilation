#ifndef NATIVE_VSBUTTON_H
#define NATIVE_VSBUTTON_H

#if RETRO_USE_NETWORKING

struct NativeEntity_MultiplayerButton : NativeEntityBase {
    int field_10;
    byte visible;
    int field_18;
    int field_1C;
    float x;
    float y;
    float z;
    MeshInfo *meshVS;
    float angle;
    float scale;
    byte textureCircle;
    byte r;
    byte g;
    byte b;
    MatrixF renderMatrix;
    MatrixF matrixTemp;
    NativeEntity_TextLabel *labelPtr;
    float connectTimer;
};

void MultiplayerButton_Create(void *objPtr);
void MultiplayerButton_Main(void *objPtr);

#endif

#endif // !NATIVE_VSBUTTON_H
