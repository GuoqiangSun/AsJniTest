package startai.com.cn.asjnitest;

/**
 * author: Guoqiang_Sun
 * date: 2018/10/25 0025
 *
 * Desc:  javah -d ../jni startai.com.cn.asjnitest.JniTest
 *
 */
public class JniTest {

    static {
        System.loadLibrary("JniTest");
    }

    public  native String getMsgFromJni();

    public  native long calculation();

}
