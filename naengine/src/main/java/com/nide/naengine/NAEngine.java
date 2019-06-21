package com.nide.naengine;

public class NAEngine {
    private long engine_ptr_;

    public NAEngine() {
        engine_ptr_ = createNAEngine(4);
        System.loadLibrary("native-lib");
    }

    public void destroy() {
        destroyNAEngine(engine_ptr_);
    }

    @Override
    protected void finalize() throws Throwable {
        super.finalize();
        destroyNAEngine(engine_ptr_);
    }

    public int bla() {return 3;}

    public String getName() {
        return getNameJNI();
    }
    public Integer compute() {
        return compute(engine_ptr_,3);
    }

    private native String getNameJNI();
    private native int compute(long ptr, int value);
    private native long createNAEngine(long value);
    private native void destroyNAEngine(long ptr);
}
