/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBDateFormatter.h>

@class NSCalendar, NSDateFormatter, NSString;

@interface FBAtomicDateFormatter : FBDateFormatter {

	NSCalendar* _calendar;
	NSDateFormatter* _dateFormatter;
	char _printsFutureYearsAsRelative;
	char _printsFutureMonthsAsRelative;
	char _printsFutureWeeksAsRelative;
	char _printsTomorrow;
	char _printsFutureHoursAsRelative;
	char _printsFutureMinutesAsRelative;
	char _printsToday;
	char _printsPastSecondsAsRelative;
	char _printsPastMinutesAsRelative;
	char _printsPastHoursAsRelative;
	char _printsYesterday;
	char _printsPastDaysAsRelative;
	char _printsPastWeeksAsRelative;
	char _printsPastMonthsAsRelative;
	char _printsPastYearsAsRelative;
	NSString* _futureYearsTemplate;
	NSString* _futureDifferentYearTemplate;
	NSString* _futureMonthsTemplate;
	NSString* _futureWeeksTemplate;
	NSString* _futureDaysTemplate;
	NSString* _futureTemplate;
	NSString* _pastDaysTemplate;
	NSString* _pastWeeksTemplate;
	NSString* _pastMonthsTemplate;
	NSString* _pastDifferentYearTemplate;
	NSString* _pastYearsTemplate;
	/*^block*/id _preFormatBlock;
	/*^block*/id _postFormatBlock;
	int _relativeStringStyle;
	NSString* _defaultTemplate;
	NSString* _defaultString;
	unsigned _futureCalendarComponents;
	unsigned _pastCalendarComponents;

}

@property (nonatomic,readonly) char printsFutureYearsAsRelative;                         //@synthesize printsFutureYearsAsRelative=_printsFutureYearsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureYearsTemplate;                      //@synthesize futureYearsTemplate=_futureYearsTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureDifferentYearTemplate;              //@synthesize futureDifferentYearTemplate=_futureDifferentYearTemplate - In the implementation block
@property (nonatomic,readonly) char printsFutureMonthsAsRelative;                        //@synthesize printsFutureMonthsAsRelative=_printsFutureMonthsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureMonthsTemplate;                     //@synthesize futureMonthsTemplate=_futureMonthsTemplate - In the implementation block
@property (nonatomic,readonly) char printsFutureWeeksAsRelative;                         //@synthesize printsFutureWeeksAsRelative=_printsFutureWeeksAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureWeeksTemplate;                      //@synthesize futureWeeksTemplate=_futureWeeksTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureDaysTemplate;                       //@synthesize futureDaysTemplate=_futureDaysTemplate - In the implementation block
@property (nonatomic,readonly) char printsTomorrow;                                      //@synthesize printsTomorrow=_printsTomorrow - In the implementation block
@property (nonatomic,readonly) char printsFutureHoursAsRelative;                         //@synthesize printsFutureHoursAsRelative=_printsFutureHoursAsRelative - In the implementation block
@property (nonatomic,readonly) char printsFutureMinutesAsRelative;                       //@synthesize printsFutureMinutesAsRelative=_printsFutureMinutesAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * futureTemplate;                           //@synthesize futureTemplate=_futureTemplate - In the implementation block
@property (nonatomic,readonly) char printsToday;                                         //@synthesize printsToday=_printsToday - In the implementation block
@property (nonatomic,readonly) char printsPastSecondsAsRelative;                         //@synthesize printsPastSecondsAsRelative=_printsPastSecondsAsRelative - In the implementation block
@property (nonatomic,readonly) char printsPastMinutesAsRelative;                         //@synthesize printsPastMinutesAsRelative=_printsPastMinutesAsRelative - In the implementation block
@property (nonatomic,readonly) char printsPastHoursAsRelative;                           //@synthesize printsPastHoursAsRelative=_printsPastHoursAsRelative - In the implementation block
@property (nonatomic,readonly) char printsYesterday;                                     //@synthesize printsYesterday=_printsYesterday - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastDaysTemplate;                         //@synthesize pastDaysTemplate=_pastDaysTemplate - In the implementation block
@property (nonatomic,readonly) char printsPastDaysAsRelative;                            //@synthesize printsPastDaysAsRelative=_printsPastDaysAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastWeeksTemplate;                        //@synthesize pastWeeksTemplate=_pastWeeksTemplate - In the implementation block
@property (nonatomic,readonly) char printsPastWeeksAsRelative;                           //@synthesize printsPastWeeksAsRelative=_printsPastWeeksAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastMonthsTemplate;                       //@synthesize pastMonthsTemplate=_pastMonthsTemplate - In the implementation block
@property (nonatomic,readonly) char printsPastMonthsAsRelative;                          //@synthesize printsPastMonthsAsRelative=_printsPastMonthsAsRelative - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastDifferentYearTemplate;                //@synthesize pastDifferentYearTemplate=_pastDifferentYearTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pastYearsTemplate;                        //@synthesize pastYearsTemplate=_pastYearsTemplate - In the implementation block
@property (nonatomic,readonly) char printsPastYearsAsRelative;                           //@synthesize printsPastYearsAsRelative=_printsPastYearsAsRelative - In the implementation block
@property (nonatomic,readonly) id preFormatBlock;                                        //@synthesize preFormatBlock=_preFormatBlock - In the implementation block
@property (nonatomic,readonly) id postFormatBlock;                                       //@synthesize postFormatBlock=_postFormatBlock - In the implementation block
@property (nonatomic,readonly) int relativeStringStyle;                                  //@synthesize relativeStringStyle=_relativeStringStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultTemplate;                          //@synthesize defaultTemplate=_defaultTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultString;                            //@synthesize defaultString=_defaultString - In the implementation block
@property (nonatomic,readonly) unsigned futureCalendarComponents;                        //@synthesize futureCalendarComponents=_futureCalendarComponents - In the implementation block
@property (nonatomic,readonly) unsigned pastCalendarComponents;                          //@synthesize pastCalendarComponents=_pastCalendarComponents - In the implementation block
-(id)initWithBuilder:(id)arg1 ;
-(id)formatDate:(id)arg1 relativeToDate:(id)arg2 timeZone:(id)arg3 ;
-(char)printsFutureYearsAsRelative;
-(NSString *)futureYearsTemplate;
-(NSString *)futureDifferentYearTemplate;
-(char)printsFutureMonthsAsRelative;
-(NSString *)futureMonthsTemplate;
-(char)printsFutureWeeksAsRelative;
-(NSString *)futureWeeksTemplate;
-(NSString *)futureDaysTemplate;
-(char)printsFutureHoursAsRelative;
-(char)printsFutureMinutesAsRelative;
-(NSString *)futureTemplate;
-(char)printsPastSecondsAsRelative;
-(char)printsPastMinutesAsRelative;
-(char)printsPastHoursAsRelative;
-(NSString *)pastDaysTemplate;
-(char)printsPastDaysAsRelative;
-(NSString *)pastWeeksTemplate;
-(char)printsPastWeeksAsRelative;
-(NSString *)pastMonthsTemplate;
-(char)printsPastMonthsAsRelative;
-(NSString *)pastDifferentYearTemplate;
-(NSString *)pastYearsTemplate;
-(char)printsPastYearsAsRelative;
-(char)printsTomorrow;
-(char)printsToday;
-(char)printsYesterday;
-(id)preFormatBlock;
-(id)postFormatBlock;
-(int)relativeStringStyle;
-(NSString *)defaultTemplate;
-(id)_stringFromDate:(id)arg1 now:(id)arg2 appliedRule:(int*)arg3 accessible:(char)arg4 timeZone:(id)arg5 ;
-(id)_stringFromDate:(id)arg1 template:(id)arg2 timeZone:(id)arg3 ;
-(unsigned)futureCalendarComponents;
-(unsigned)pastCalendarComponents;
-(NSString *)defaultString;
-(id)formatDate:(id)arg1 ;
@end

