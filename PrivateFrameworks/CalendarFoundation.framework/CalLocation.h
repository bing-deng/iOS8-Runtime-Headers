/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, CLLocation, CLPlacemark;

@interface CalLocation : NSObject <NSSecureCoding> {
    CLLocation *_location;
    NSString *_address;
    NSString *_title;
    NSString *_displayName;
    NSString *_abURLString;
    CLPlacemark *_placemark;
    bool_isCurrentLocation;
    double _radius;
    NSString *_routeType;
    int _type;
}

@property(copy) CLLocation * location;
@property(copy) NSString * address;
@property(copy) NSString * title;
@property(copy) NSString * displayName;
@property(copy) NSString * abURLString;
@property(copy) NSString * routeType;
@property(retain) CLPlacemark * placemark;
@property(readonly) bool isCurrentLocation;
@property int type;
@property double radius;

+ (id)routeTypeStringForCalLocationRoutingMode:(long long)arg1;
+ (id)coordinatesFromGeoURLString:(id)arg1;
+ (id)geoURLStringFromCoordinates:(id)arg1;
+ (id)fullDisplayStringWithTitle:(id)arg1 address:(id)arg2;
+ (long long)routingModeEnumForCalRouteType:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)fullTitleAndAddressString;
- (id)geoURLString;
- (id)typeString;
- (id)placemark;
- (void)setAbURLString:(id)arg1;
- (id)abURLString;
- (void)setPlacemark:(id)arg1;
- (bool)isCurrentLocation;
- (void)setRouteType:(id)arg1;
- (void)setAddress:(id)arg1;
- (id)routeType;
- (id)location;
- (void)setDisplayName:(id)arg1;
- (void)setRadius:(double)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (double)radius;
- (id)displayString;
- (void)setLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (double)distanceFromLocation:(id)arg1;
- (id)address;

@end
