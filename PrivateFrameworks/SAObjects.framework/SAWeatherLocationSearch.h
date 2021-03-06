/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand  {
}

@property(copy) NSURL * identifier;
@property(copy) NSString * locationId;

+ (id)locationSearchWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSearch;

- (void)setLocationId:(id)arg1;
- (id)locationId;
- (bool)requiresResponse;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
