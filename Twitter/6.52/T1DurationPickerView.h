/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIPickerView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@protocol T1DurationPickerViewDelegate;
@class UILabel, NSDictionary, NSString;

@interface T1DurationPickerView : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate> {

	id<T1DurationPickerViewDelegate> _durationDelegate;
	int _maxDays;
	int _maxHours;
	int _maxMinutes;
	UILabel* _daysLabel;
	UILabel* _hoursLabel;
	UILabel* _minutesLabel;
	NSDictionary* _pickerWheelValues;
	double _maxInterval;
	double _minInterval;
	CGSize _valueLabelSize;

}

@property (assign,nonatomic) double maxInterval;                                                    //@synthesize maxInterval=_maxInterval - In the implementation block
@property (assign,nonatomic) double minInterval;                                                    //@synthesize minInterval=_minInterval - In the implementation block
@property (assign,nonatomic) int maxDays;                                                           //@synthesize maxDays=_maxDays - In the implementation block
@property (assign,nonatomic) int maxHours;                                                          //@synthesize maxHours=_maxHours - In the implementation block
@property (assign,nonatomic) int maxMinutes;                                                        //@synthesize maxMinutes=_maxMinutes - In the implementation block
@property (nonatomic,retain) UILabel * daysLabel;                                                   //@synthesize daysLabel=_daysLabel - In the implementation block
@property (nonatomic,retain) UILabel * hoursLabel;                                                  //@synthesize hoursLabel=_hoursLabel - In the implementation block
@property (nonatomic,retain) UILabel * minutesLabel;                                                //@synthesize minutesLabel=_minutesLabel - In the implementation block
@property (nonatomic,retain) NSDictionary * pickerWheelValues;                                      //@synthesize pickerWheelValues=_pickerWheelValues - In the implementation block
@property (assign,nonatomic) CGSize valueLabelSize;                                                 //@synthesize valueLabelSize=_valueLabelSize - In the implementation block
@property (assign,nonatomic,__weak) id<T1DurationPickerViewDelegate> durationDelegate;              //@synthesize durationDelegate=_durationDelegate - In the implementation block
@property (assign,nonatomic) double selectedDuration; 
@property (nonatomic,readonly) NSString * selectedDurationString; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_arrayWithNumberValuesUpTo:(unsigned)arg1 ;
-(void)setSelectedDuration:(double)arg1 ;
-(NSString *)selectedDurationString;
-(void)setDurationDelegate:(id<T1DurationPickerViewDelegate>)arg1 ;
-(CGSize)_sizeOfWidestStringInArray:(id)arg1 ;
-(id)_unitLabelForComponent:(int)arg1 ;
-(double)_clampedInterval:(double)arg1 ;
-(void)setSelectedDuration:(double)arg1 animated:(char)arg2 ;
-(id)_pickerWheelValueForRow:(int)arg1 inComponent:(int)arg2 ;
-(id)initWithMinInterval:(double)arg1 maxInterval:(double)arg2 ;
-(double)selectedDuration;
-(id<T1DurationPickerViewDelegate>)durationDelegate;
-(void)setMinInterval:(double)arg1 ;
-(int)maxDays;
-(void)setMaxDays:(int)arg1 ;
-(int)maxHours;
-(void)setMaxHours:(int)arg1 ;
-(int)maxMinutes;
-(void)setMaxMinutes:(int)arg1 ;
-(UILabel *)daysLabel;
-(void)setDaysLabel:(UILabel *)arg1 ;
-(UILabel *)hoursLabel;
-(void)setHoursLabel:(UILabel *)arg1 ;
-(UILabel *)minutesLabel;
-(void)setMinutesLabel:(UILabel *)arg1 ;
-(NSDictionary *)pickerWheelValues;
-(void)setPickerWheelValues:(NSDictionary *)arg1 ;
-(CGSize)valueLabelSize;
-(void)setValueLabelSize:(CGSize)arg1 ;
-(double)minInterval;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2 ;
-(void)layoutSubviews;
-(id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(void)setMaxInterval:(double)arg1 ;
-(double)maxInterval;
@end

