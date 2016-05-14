/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:00 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MNMessagesCollectionViewDelegate.h>

@class MNCollectionViewPlaygroundView, NSMutableArray, UITapGestureRecognizer, UISwipeGestureRecognizer, NSString;

@interface MNCollectionViewPlaygroundViewController : UIViewController <UICollectionViewDataSource, MNMessagesCollectionViewDelegate> {

	MNCollectionViewPlaygroundView* _playgroundView;
	NSMutableArray* _messageModels;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UISwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	char _randomUpdating;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 layoutElementsForItemAtIndexPath:(id)arg3 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearanceTransitioningForElementWithCategory:(unsigned)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 appearingTransformerForElementWithCategory:(unsigned)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(id)messagesCollectionView:(id)arg1 layout:(id)arg2 disappearingTransformerForElementWithCategory:(unsigned)arg3 kind:(id)arg4 atIndexPath:(id)arg5 ;
-(void)_doubleTap;
-(void)_swipeLeft:(id)arg1 ;
-(void)_swipeRight:(id)arg1 ;
-(void)_stopRandomUpdates;
-(void)_performRandomUpdates;
-(id)_sendMessage;
-(id)_receiveMessage;
-(id)_deleteMessageAt:(int)arg1 ;
-(id)_insertMessageAt:(int)arg1 ;
-(id)_multipleUpdate;
-(void)_performUpdateWithUpdateItems:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_insertMessageAt:(int)arg1 fromMe:(char)arg2 ;
-(id)_updateProfileViewModels;
-(id)_updateSentReceiptViewModels;
-(id)_updateSeenReceiptViewModels;
-(void)_scrollToBottomAnimated;
-(void)_startRandomUpdates;
-(void)_insertAtPoint:(CGPoint)arg1 fromMe:(char)arg2 ;
-(void)_deleteAtPoint:(CGPoint)arg1 fromMe:(char)arg2 ;
-(int)_insertIndexAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

