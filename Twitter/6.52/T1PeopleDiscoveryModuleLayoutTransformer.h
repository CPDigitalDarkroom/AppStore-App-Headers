/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSPredicate, TFNTwitterAccount;


@protocol T1PeopleDiscoveryModuleLayoutTransformer <NSObject>
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (nonatomic,readonly) TFNTwitterAccount * account; 
@property (nonatomic,copy,readonly) id userTapActionBlock; 
@optional
-(id)scribeItemForModule:(id)arg1;

@required
-(id)initWithAccount:(id)arg1 userTapActionBlock:(/*^block*/id)arg2;
-(void)configureAdaptersForSectionController:(id)arg1;
-(id)userTapActionBlock;
-(id)itemsForModule:(id)arg1;
-(NSPredicate *)predicate;
-(TFNTwitterAccount *)account;

@end

