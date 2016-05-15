/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNTableViewCell.h>

@class UIPickerView;

@interface TFNPickerViewDataViewAdapterTableViewCell : TFNTableViewCell {

	char _needsWidthFix;
	UIPickerView* _pickerView;

}

@property (nonatomic,retain) UIPickerView * pickerView;              //@synthesize pickerView=_pickerView - In the implementation block
@property (assign,nonatomic) char needsWidthFix;                     //@synthesize needsWidthFix=_needsWidthFix - In the implementation block
-(char)needsWidthFix;
-(void)setNeedsWidthFix:(char)arg1 ;
-(id)calculatedLayoutMetrics;
-(UIPickerView *)pickerView;
-(void)setPickerView:(UIPickerView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)cleanup;
@end

