/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIView, UILabel, NSString, UIColor, UIFont;

@interface FBLoadingIndicatorView : UIView {

	UIActivityIndicatorView* _spinner;
	UIView* _container;
	UILabel* _label;
	char _pinSpinnerToTop;
	float _paddingX;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
@property (nonatomic,retain) UIFont * textFont; 
@property (nonatomic,retain) UIColor * spinnerTintColor; 
@property (assign,nonatomic) char hidesWhenStopped; 
@property (assign,nonatomic) char pinSpinnerToTop;                             //@synthesize pinSpinnerToTop=_pinSpinnerToTop - In the implementation block
@property (assign,nonatomic) float paddingX;                                   //@synthesize paddingX=_paddingX - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) char animating; 
-(id)initWithFrame:(CGRect)arg1 spinnerStyle:(int)arg2 ;
-(void)setTextFont:(UIFont *)arg1 ;
-(void)setPaddingX:(float)arg1 ;
-(void)setPinSpinnerToTop:(char)arg1 ;
-(void)setSpinnerTintColor:(UIColor *)arg1 ;
-(UIColor *)spinnerTintColor;
-(char)pinSpinnerToTop;
-(float)paddingX;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)sizeToFit;
-(UIColor *)textColor;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setHidesWhenStopped:(char)arg1 ;
-(char)hidesWhenStopped;
-(UIFont *)textFont;
@end

