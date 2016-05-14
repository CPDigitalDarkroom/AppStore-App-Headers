/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UICollectionView.h>

@class FBCollectionViewUpdateListenerAnnouncer;

@interface FBUpdateAnnouncingCollectionView : UICollectionView {

	char _performingBatchUpdates;
	FBCollectionViewUpdateListenerAnnouncer* _listenerAnnouncer;

}

@property (nonatomic,readonly) FBCollectionViewUpdateListenerAnnouncer * listenerAnnouncer;              //@synthesize listenerAnnouncer=_listenerAnnouncer - In the implementation block
-(FBCollectionViewUpdateListenerAnnouncer *)listenerAnnouncer;
-(void)willBeginSingleUpdate;
-(void)didBeginSingleUpdate;
-(void)willEndSingleUpdate;
-(void)didEndSingleUpdate;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)performBatchUpdates:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
@end

