/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNGenericItem.h>

@class NSString;

@interface T1NotificationOptionItem : TFNGenericItem {

	int _enabled;
	/*^block*/id _enableBlock;
	/*^block*/id _optionChangedBlock;
	NSString* _summary;

}

@property (assign,nonatomic) int enabled;                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id enableBlock;                     //@synthesize enableBlock=_enableBlock - In the implementation block
@property (nonatomic,copy) id optionChangedBlock;              //@synthesize optionChangedBlock=_optionChangedBlock - In the implementation block
@property (nonatomic,copy) NSString * summary;                 //@synthesize summary=_summary - In the implementation block
-(void)setEnableBlock:(id)arg1 ;
-(id)initWithTitle:(id)arg1 enabled:(int)arg2 ;
-(void)setOptionChangedBlock:(id)arg1 ;
-(id)_summaryForEnabled:(int)arg1 ;
-(id)_viewControllerWithTitle:(id)arg1 ;
-(id)enableBlock;
-(id)optionChangedBlock;
-(void)setSummary:(NSString *)arg1 ;
-(int)enabled;
-(void)setEnabled:(int)arg1 ;
-(NSString *)summary;
@end

