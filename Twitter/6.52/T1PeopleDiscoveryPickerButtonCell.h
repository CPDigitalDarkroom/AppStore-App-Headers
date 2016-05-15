/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:26 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class TFNButton, TFNTwitterCallToAction;

@interface T1PeopleDiscoveryPickerButtonCell : UICollectionViewCell {

	TFNButton* _button;
	TFNTwitterCallToAction* _callToAction;

}

@property (nonatomic,readonly) TFNButton * button;                               //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TFNTwitterCallToAction * callToAction;              //@synthesize callToAction=_callToAction - In the implementation block
-(TFNTwitterCallToAction *)callToAction;
-(void)setCallToAction:(TFNTwitterCallToAction *)arg1 ;
-(TFNButton *)button;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
@end

