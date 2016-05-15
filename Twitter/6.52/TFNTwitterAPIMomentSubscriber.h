/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:53 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentSubscriber.h>

@class TFNTwitterAccount, NSString;

@interface TFNTwitterAPIMomentSubscriber : NSObject <TFNTwitterMomentSubscriber> {

	TFNTwitterAccount* _account;

}

@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)subscribeToMomentID:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(void)unsubscribeToMomentID:(id)arg1 responseBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

