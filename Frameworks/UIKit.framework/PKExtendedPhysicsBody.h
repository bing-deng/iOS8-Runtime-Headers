/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface PKExtendedPhysicsBody : PKPhysicsBody  {
    long long _associations;
    double _areaFactor;
}

@property double normalizedDensity;

+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;

- (id)init;
- (id)description;
- (id)initWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
- (void)associate;
- (bool)dissociate;
- (double)normalizedDensity;
- (void)setNormalizedDensity:(double)arg1;

@end
