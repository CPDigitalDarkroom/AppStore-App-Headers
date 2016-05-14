/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:10 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBKenBurnsAnimatorViewDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBBurstImageView.h>

@class FBKenBurnsAnimatorView, FBBurstAnimationImageViewSpecifier, NSArray, NSString;

@interface FBBurstKenBurnsImageView : UIView <FBKenBurnsAnimatorViewDataSource, FBBurstImageView> {

	FBKenBurnsAnimatorView* _kenBurnsView;
	FBBurstAnimationImageViewSpecifier* _previousViewSpecifier;
	NSArray* _imageSpecifiers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewSpecifier:(id)arg1 ;
-(void)restorePreviousViewSpecifier;
-(id)kenBurnsAnimatorView:(id)arg1 viewToBeShownAfterView:(id)arg2 ;
-(void)layoutSubviews;
-(void)stopAnimating;
-(void)startAnimating;
@end

