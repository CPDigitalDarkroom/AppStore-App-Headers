/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardViewBaseEventHandler.h>
#import <Twitter/TFNTwitterCardViewEventHandler.h>

@class TFNTwitterCardAPI, NSString;

@interface T1NativePollEventHandler : TFNTwitterCardViewBaseEventHandler <TFNTwitterCardViewEventHandler> {

	TFNTwitterCardAPI* _cardAPI;

}

@property (nonatomic,retain) TFNTwitterCardAPI * cardAPI;              //@synthesize cardAPI=_cardAPI - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleViewEvent:(id)arg1 context:(id)arg2 ;
-(TFNTwitterCardAPI *)cardAPI;
-(void)setCardAPI:(TFNTwitterCardAPI *)arg1 ;
-(id)init;
@end

