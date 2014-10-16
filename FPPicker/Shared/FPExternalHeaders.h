//
//  FPExternalHeaders.h
//  FPPicker
//
//  Created by Liyan David Chang on 7/8/12.
//  Copyright (c) 2012 Filepicker.io. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FPPickerController;
@class FPSaveController;
@class FPMediaInfo;

@protocol FPPickerDelegate <NSObject>

@optional

- (BOOL)FPPickerController:(FPPickerController *)picker shouldPickMediaWithInfo:(FPMediaInfo *)info;
- (void)FPPickerController:(FPPickerController *)picker didPickMediaWithInfo:(FPMediaInfo *)info;
- (void)FPPickerController:(FPPickerController *)picker didFinishPickingMediaWithInfo:(FPMediaInfo *)info;
- (void)FPPickerController:(FPPickerController *)picker didFinishPickingMultipleMediaWithResults:(NSArray *)results;
- (void)FPPickerControllerDidCancel:(FPPickerController *)picker;

@end

@protocol FPSaveDelegate <NSObject>

@optional

- (void)FPSaveController:(FPSaveController *)picker didFinishPickingMediaWithInfo:(FPMediaInfo *)info;
- (void)FPSaveController:(FPSaveController *)picker didError:(NSError *)error;
- (void)FPSaveControllerDidCancel:(FPSaveController *)picker;

@end

@class FPSourceController;

@protocol FPSourcePickerDelegate <NSObject>

- (BOOL)FPSourceController:(FPSourceController *)picker shouldPickMediaWithInfo:(FPMediaInfo *)info;
- (void)FPSourceController:(FPSourceController *)picker didPickMediaWithInfo:(FPMediaInfo *)info;
- (void)FPSourceController:(FPSourceController *)picker didFinishPickingMediaWithInfo:(FPMediaInfo *)info;
- (void)FPSourceController:(FPSourceController *)picker didFinishPickingMultipleMediaWithResults:(NSArray *)results;
- (void)FPSourceControllerDidCancel:(FPSourceController *)picker;

@end
