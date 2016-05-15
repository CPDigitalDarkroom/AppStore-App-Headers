/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface T1CropShadowView : UIView {

	UIView* _topView;
	UIView* _bottomView;
	UIView* _leftView;
	UIView* _rightView;
	CGRect _cropRect;

}

@property (assign,nonatomic) CGRect cropRect;              //@synthesize cropRect=_cropRect - In the implementation block
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

