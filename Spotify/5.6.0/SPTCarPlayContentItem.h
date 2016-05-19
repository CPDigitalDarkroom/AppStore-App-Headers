/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPContentItem.h>

@protocol SPTExternalContentItem;
@interface SPTCarPlayContentItem : MPContentItem {

	id<SPTExternalContentItem> _item;
	/*^block*/id _contentCallback;
	/*^block*/id _childrenCallback;

}

@property (assign,nonatomic,__weak) id<SPTExternalContentItem> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) id contentCallback;                                    //@synthesize contentCallback=_contentCallback - In the implementation block
@property (nonatomic,copy) id childrenCallback;                                   //@synthesize childrenCallback=_childrenCallback - In the implementation block
-(id)initWithExternalContentItem:(id)arg1 ;
-(void)setContentCallback:(id)arg1 ;
-(void)setChildrenCallback:(id)arg1 ;
-(id)contentCallback;
-(id)childrenCallback;
-(void)dealloc;
-(id<SPTExternalContentItem>)item;
-(void)setItem:(id<SPTExternalContentItem>)arg1 ;
@end

