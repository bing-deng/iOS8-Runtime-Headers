/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CADistanceFieldLayer : CALayer  {
}

@property(copy) NSString * renderMode;
@property bool invertsShape;
@property struct CGColor { }* foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (bool)_hasRenderLayerSubclass;
+ (bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setForegroundColor:(struct CGColor { }*)arg1;
- (void)setOffset:(double)arg1;
- (double)offset;
- (void)setSharpness:(double)arg1;
- (void)setInvertsShape:(bool)arg1;
- (void)setRenderMode:(id)arg1;
- (unsigned int)_renderImageCopyFlags;
- (bool)invertsShape;
- (double)sharpness;
- (double)lineWidth;
- (struct CGColor { }*)foregroundColor;
- (id)renderMode;
- (struct Layer { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; struct Data { unsigned int x_3_1_1; unsigned char x_3_1_2; unsigned char x_3_1_3; unsigned char x_3_1_4; unsigned char x_3_1_5; unsigned int x_3_1_6 : 3; unsigned int x_3_1_7 : 3; unsigned int x_3_1_8 : 4; unsigned int x_3_1_9 : 4; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 30; struct Vec2<double> { double x_31_2_1; double x_31_2_2; } x_3_1_31; struct Rect { double x_32_2_1; double x_32_2_2; double x_32_2_3; double x_32_2_4; } x_3_1_32; } x3; struct Ref<CA::Render::Object> { struct Object {} *x_4_1_1; } x4; struct Ref<CA::Render::TypedArray<CA::Render::Layer> > { struct TypedArray<CA::Render::Layer> {} *x_5_1_1; } x5; struct Layer {} *x6; struct Ref<CA::Render::Layer::Ext> { struct Ext {} *x_7_1_1; } x7; struct Ref<CA::Render::TypedArray<CA::Render::Animation> > { struct TypedArray<CA::Render::Animation> {} *x_8_1_1; } x8; struct Ref<CA::Render::Handle> { struct Handle {} *x_9_1_1; } x9; }*)_copyRenderLayer:(struct Transaction { struct Shared {} *x1; int x2; struct HashTable<CA::Layer *, unsigned int *> {} *x3; struct SpinLock {} *x4; unsigned int x5; struct Level {} *x6; struct List<void (^)()> {} *x7; struct Command {} *x8; struct Deleted {} *x9; struct List<const void *> {} *x10; struct Context {} *x11; struct HashTable<CA::Layer *, CA::Layer *> {} *x12; struct __CFRunLoop {} *x13; struct __CFRunLoopObserver {} *x14; struct LayoutList {} *x15; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; }*)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int*)arg3;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)setLineWidth:(double)arg1;

@end
