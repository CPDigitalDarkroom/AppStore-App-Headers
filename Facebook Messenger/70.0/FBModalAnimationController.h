/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol FBModalAnimatedTransitioning, OS_dispatch_group;
@class NSObject, NSString;

@interface FBModalAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	id<FBModalAnimatedTransitioning> _transitioning;
	char _isPresenting;
	NSObject*<OS_dispatch_group> _animationGroup;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> animationGroup;              //@synthesize animationGroup=_animationGroup - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForPresentation:(char)arg1 withTransitioning:(id)arg2 ;
-(NSObject*<OS_dispatch_group>)animationGroup;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
@end

