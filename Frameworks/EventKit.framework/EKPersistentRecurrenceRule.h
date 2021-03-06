/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString, EKRecurrenceEnd, NSArray, NSDate, EKPersistentCalendarItem;

@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying> {
    id _helper;
    EKRecurrenceEnd *_recurrenceEnd;
}

@property(readonly) NSString * UUID;
@property(readonly) NSString * calendarIdentifier;
@property(copy) NSDate * endDate;
@property unsigned long long count;
@property int frequency;
@property long long interval;
@property long long firstDayOfTheWeek;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSArray * weeksOfTheYear;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * setPositions;
@property(readonly) NSDate * cachedEndDate;
@property(retain) EKPersistentCalendarItem * owner;
@property(readonly) bool shouldPinMonthDays;

+ (id)relations;
+ (id)defaultPropertiesToLoad;

- (bool)validate:(id*)arg1;
- (void)setEndDate:(id)arg1;
- (long long)firstDayOfTheWeek;
- (bool)shouldPinMonthDays;
- (id)cachedEndDate;
- (void)setFirstDayOfTheWeek:(long long)arg1;
- (id)weeksOfTheYear;
- (id)daysOfTheYear;
- (id)setPositions;
- (id)daysOfTheWeek;
- (void)setWeeksOfTheYear:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setSetPositions:(id)arg1;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (id)daysOfTheMonth;
- (id)monthsOfTheYear;
- (int)entityType;
- (id)owner;
- (id)_helper;
- (id)endDate;
- (bool)isDirty;
- (id)UUID;
- (void)setFrequency:(int)arg1;
- (int)frequency;
- (id)init;
- (void)setOwner:(id)arg1;
- (id)calendarIdentifier;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCount:(unsigned long long)arg1;
- (long long)interval;
- (void)setInterval:(long long)arg1;

@end
