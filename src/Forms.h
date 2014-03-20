#ifndef FORMS_H_Y3DLK1ER
#define FORMS_H_Y3DLK1ER

#include "gameplay.h"
using namespace gameplay;

class SidePanel {
public:
    SidePanel(); 

    class Delegate {
    public:
        virtual void playSelectedNode() = 0;
        virtual void playAllNodes() = 0 ;
        virtual void setGrid( bool draw ) = 0;
        virtual void setLightVector( const Vector3 & lightVector ) = 0;
        virtual void setClearColor( const Vector4 & clearColor ) = 0;
    };

    virtual void initialize( Control::Listener* game, Scene* scene);
    virtual void finalize( Game* game );

    void update( Game* game, float elapsedTime );
    void render( Game* game, float elapsedTime );

    void controlEvent( Delegate* delegate, Control* control, Control::Listener::EventType evt );

    void setSelectedNode ( Node* node );

private:
    // form related members
    Form*     _form;
    Slider*   _sliderLightVectorX;
    Slider*   _sliderLightVectorY;
    Slider*   _sliderLightVectorZ;
    Slider*   _sliderClearColorRed;
    Slider*   _sliderClearColorGreen;
    Slider*   _sliderClearColorBlue;
    Slider*   _acr;
    Slider*   _acg;
    Slider*   _acb;
    Button*   _bPlayAll;
    Button*   _bPlaySelected;
    CheckBox* _gridCheckBox;
};

#endif /* end of include guard: FORMS_H_Y3DLK1ER */
