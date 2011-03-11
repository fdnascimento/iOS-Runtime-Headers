/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface LKNSValueCodingProxy : CACodingProxy  {
    int _kind;
    union $_603 { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } rect; 
        struct CATransform3D { 
            float m11; 
            float m12; 
            float m13; 
            float m14; 
            float m21; 
            float m22; 
            float m23; 
            float m24; 
            float m31; 
            float m32; 
            float m33; 
            float m34; 
            float m41; 
            float m42; 
            float m43; 
            float m44; 
        } transform; 
        struct CADoublePoint { 
            double x; 
            double y; 
        } dpoint; 
        struct CADoubleSize { 
            double width; 
            double height; 
        } dsize; 
        struct CADoubleRect { 
            struct CADoublePoint { 
                double x; 
                double y; 
            } origin; 
            struct CADoubleSize { 
                double width; 
                double height; 
            } size; 
        } drect; 
    } _u;
}


- (id)decodedObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end