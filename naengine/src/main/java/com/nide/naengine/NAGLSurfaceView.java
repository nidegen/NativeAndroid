package com.nide.naengine;

import android.opengl.GLSurfaceView;
import android.content.Context;

public class NAGLSurfaceView extends GLSurfaceView {
    private final NAEngine engine;

    public NAGLSurfaceView(Context context){
        super(context);

        // Create an OpenGL ES 2.0 context
        setEGLContextClientVersion(2);

        engine = new NAEngine();

        // Set the Renderer for drawing on the GLSurfaceView
        setRenderer(engine);
    }

}
