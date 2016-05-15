/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface T1ComposeTooltipConfiguration : NSObject {

	NSString* _tooltipText;

}

@property (nonatomic,readonly) NSString * tooltipText;                          //@synthesize tooltipText=_tooltipText - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityIdentifier; 
@property (nonatomic,readonly) char showOverlay; 
@property (nonatomic,readonly) char passOverlayTapsToTargetView; 
@property (nonatomic,readonly) char sendControlEventsWhenTapped; 
@property (nonatomic,readonly) NSString * scribeComponent; 
@property (nonatomic,readonly) unsigned arrowDirection; 
@property (nonatomic,readonly) double presentationDelay; 
-(NSString *)scribeComponent;
-(char)shouldShowTooltipForContext:(id)arg1 ;
-(void)tooltipWillShowForContext:(id)arg1 fromView:(id)arg2 ;
-(double)presentationDelay;
-(char)passOverlayTapsToTargetView;
-(char)sendControlEventsWhenTapped;
-(void)tooltipDidShowForContext:(id)arg1 ;
-(void)tooltipTappedForContext:(id)arg1 withTargetView:(id)arg2 ;
-(void)tooltipDismissedForContext:(id)arg1 ;
-(id)accountFromContext:(id)arg1 ;
-(NSString *)tooltipText;
-(NSString *)accessibilityIdentifier;
-(unsigned)arrowDirection;
-(char)showOverlay;
@end

