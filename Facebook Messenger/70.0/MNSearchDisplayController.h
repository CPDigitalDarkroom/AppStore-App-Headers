/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:23 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISearchDisplayController.h>

@class UIColor;

@interface MNSearchDisplayController : UISearchDisplayController {

	UIColor* _dimmingViewColor;
	float _dimmingViewAlpha;

}

@property (nonatomic,retain) UIColor * dimmingViewColor;              //@synthesize dimmingViewColor=_dimmingViewColor - In the implementation block
@property (assign,nonatomic) float dimmingViewAlpha;                  //@synthesize dimmingViewAlpha=_dimmingViewAlpha - In the implementation block
-(void)setDimmingViewColor:(UIColor *)arg1 ;
-(void)_applyDimmingViewConfiguration;
-(void)setDimmingViewAlpha:(float)arg1 ;
-(UIColor *)dimmingViewColor;
-(float)dimmingViewAlpha;
-(id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 ;
-(void)setActive:(char)arg1 animated:(char)arg2 ;
@end

